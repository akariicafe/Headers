@class UIColor;

@interface WAAQIGradientStop : NSObject

@property (readonly, nonatomic) UIColor *color;
@property (readonly, nonatomic) float location;

+ (id)gradientStopWithColor:(id)a0 location:(float)a1;

- (void).cxx_destruct;
- (id)initWithColor:(id)a0 location:(float)a1;

@end
