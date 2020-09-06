#ifndef DEFER_H_
#define DEFER_H_


namespace defer
{

template <typename T>
class defer
{
public:
    defer(T func):
        func_(func)
    { }

    ~defer()
    {
        func_();
    }

private:
    T func_;
};

}  // namespace defer

#define DEFERER_NAME1(line) \
  deferer_ ## line ## __
#define DEFERER_NAME(line) \
  DEFERER_NAME1(line)
#define defer \
  defer::defer DEFERER_NAME(__LINE__) = [&]()

#endif  // DEFER_H_
