@interface VUIGradientMaskProperties : NSObject

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } minPadding;
@property (nonatomic) struct CGSize { double width; double height; } minLengths;

+ (id)defaultGradientMaskProperties;

@end
