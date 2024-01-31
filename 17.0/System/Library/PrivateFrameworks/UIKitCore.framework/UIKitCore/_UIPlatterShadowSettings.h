@class UIColor;

@interface _UIPlatterShadowSettings : NSObject

@property (copy, nonatomic) UIColor *shadowColor;
@property (nonatomic) struct CGSize { double width; double height; } shadowOffset;
@property (nonatomic) double shadowOpacity;
@property (nonatomic) double shadowRadius;

- (void).cxx_destruct;

@end
