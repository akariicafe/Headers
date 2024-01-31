@class VKImage;

@interface VKScreenLabelFeature : NSObject

@property (readonly, nonatomic) VKImage *image;
@property (readonly, nonatomic) unsigned int type;
@property struct CGPoint { double x; double y; } position;

- (void).cxx_destruct;
- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1 type:(unsigned int)a2;

@end
