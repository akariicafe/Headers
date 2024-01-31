@interface ARImageScalingPassDescription : NSObject

@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) unsigned int pixelBufferFormat;

- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)description;

@end
