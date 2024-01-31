@interface NUNIAstronomyLocationDotConfiguration : NSObject

@property (nonatomic) double screenScale;
@property (nonatomic) struct CGSize { double width; double height; } defaultSize;
@property (nonatomic) double defaultOuterDotDiameter;
@property (nonatomic) double defaultInnerDotDiameter;

+ (double)_defaultInnerDotDiameterForDevice:(id)a0;
+ (double)_defaultOuterDotDiameterForDevice:(id)a0;
+ (struct CGSize { double x0; double x1; })_defaultSizeForDevice:(id)a0;

- (id)init;

@end
