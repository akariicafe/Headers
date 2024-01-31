@class UIColor;

@interface JFXOverlayEffectDebugViewRect : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) double borderWidth;
@property (retain, nonatomic) UIColor *borderColor;
@property (nonatomic) BOOL ignoreTransform;

- (void).cxx_destruct;

@end
