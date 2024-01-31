@class UIColor, LPSize;

@interface LPVideoPlayButtonStyle : NSObject

@property (retain, nonatomic) LPSize *size;
@property (retain, nonatomic) LPSize *backgroundSize;
@property (nonatomic) double disabledOpacity;
@property (retain, nonatomic) UIColor *color;

- (id)initWithPlatform:(long long)a0;
- (void).cxx_destruct;

@end
