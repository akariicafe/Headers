@interface ABPKPaddingParams : NSObject

@property unsigned int offsetHeight;
@property unsigned int offsetWidth;
@property unsigned int height;
@property unsigned int width;
@property float scale;

- (id)initWithInputResolution:(struct CGSize { double x0; double x1; })a0 andOutputResolution:(struct CGSize { double x0; double x1; })a1;

@end
