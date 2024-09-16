void async_divide(double x, double y, void (* _Nonnull completionHandler)(double x))
  __attribute__((swift_attr("@macro_library.AddAsync")));

typedef struct SlowComputer {
} SlowComputer;

void computer_divide(const SlowComputer *computer, double x, double y, void (* _Nonnull completionHandler)(double x))
  __attribute__((swift_attr("@macro_library.AddAsync")))
  __attribute__((swift_name("SlowComputer.divide(self:_:_:completionHandler:)")));


#if __OBJC__
@import Foundation;

@interface Computer: NSObject
-(void)multiply:(double)x by:(double)y afterDone:(void (^ _Nonnull)(double x))afterDone
  __attribute__((swift_attr("@macro_library.AddAsync")))
  __attribute__((swift_async(none)));
@end
#endif
