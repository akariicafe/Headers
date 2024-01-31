@class UIColor;

@interface GKButtonStyle : NSObject

@property (nonatomic) double cornerRadius;
@property (nonatomic) BOOL clipToBounds;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } titleEdgeInsets;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) id compositingFilter;

+ (id)standardStyle;
+ (id)defaultStyle;

- (void).cxx_destruct;
- (void)applyToButton:(id)a0;
- (id)initWithCornerRadius:(double)a0 andBackgroundColor:(id)a1;

@end
