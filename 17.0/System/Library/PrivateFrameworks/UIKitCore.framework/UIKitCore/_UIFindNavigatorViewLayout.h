@class UIFont, UIColor, NSString, UIView, UIImageSymbolConfiguration, UIButton;

@interface _UIFindNavigatorViewLayout : UIView

@property (retain, nonatomic) UIButton *nextResultButton;
@property (retain, nonatomic) UIButton *previousResultButton;
@property (retain, nonatomic) UIButton *doneButton;
@property (retain, nonatomic) UIButton *replaceButton;
@property (retain, nonatomic) UIView *searchTextField;
@property (retain, nonatomic) UIView *replaceTextField;
@property (nonatomic) BOOL replaceFieldVisible;
@property (nonatomic) BOOL usesAssistantBarHeight;
@property (nonatomic) long long assistantBarStyle;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } preferredContentSize;
@property (readonly, nonatomic) UIFont *preferredTextFieldFont;
@property (readonly, nonatomic) UIColor *preferredOpaqueBackgroundColor;
@property (readonly, nonatomic) UIImageSymbolConfiguration *preferredSymbolConfigurationForImageForTextFields;
@property (readonly, nonatomic) NSString *preferredMaximumContentSizeCategory;
@property (readonly, nonatomic) double preferredCornerRadius;
@property (readonly, nonatomic) double preferredHorizontalPadding;
@property (readonly, nonatomic) double preferredVerticalPadding;
@property (readonly, nonatomic) BOOL showsReplaceInOptionsMenu;
@property (readonly, nonatomic) BOOL usesSymbolForDoneButton;
@property (readonly, nonatomic) BOOL usesNextAndPreviousArrows;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)_setAndActivateConstraints;
- (void)addMaterialToViewIfNeeded:(id)a0;
- (void)applyStyleToFieldIfNeeded:(id)a0;
- (id)commonButtonConfig:(id /* block */)a0;
- (id)commonButtonConfigWithImageName:(id)a0 isAccessory:(BOOL)a1;
- (id)commonButtonConfigWithTitle:(id)a0;
- (void)prepareForLayout;

@end
