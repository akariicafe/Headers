@interface AMSUIWebModel : NSObject

+ (id)backgroundColorFromPageModel:(id)a0;
+ (id)impressionEventFromPageModel:(id)a0 context:(id)a1;
+ (id)navigationBarFromPageModel:(id)a0 context:(id)a1;
+ (id)pageModelFromJSObject:(id)a0 context:(id)a1;
+ (struct CGSize { double x0; double x1; })windowSizeFromJSObject:(id)a0 key:(id)a1;
+ (struct CGSize { double x0; double x1; })windowSizeFromPageModel:(id)a0;

@end
