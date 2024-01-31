@class UIColor, LPSize;

@interface LPShadowStyle : NSObject

@property (nonatomic) double radius;
@property (nonatomic) double opacity;
@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) LPSize *offset;

+ (id)cardHeadingIconShadow;
+ (id)collaborationPreviewShadow;

- (id)init;
- (void).cxx_destruct;

@end
