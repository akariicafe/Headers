@interface AMSUIDHomeScreenIcons : NSObject

@property (class, readonly) double cornerRadius;
@property (class, readonly) struct CGSize { double x0; double x1; } size;

+ (int)variant;
+ (double)scaledCornerRadiusForSize:(struct CGSize { double x0; double x1; })a0;

@end
