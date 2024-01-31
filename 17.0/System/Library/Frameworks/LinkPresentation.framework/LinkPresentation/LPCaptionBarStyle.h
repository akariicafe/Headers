@class UIColor, LPPointUnit, LPCollaborationFooterStyle, LPCaptionBarAccessoryStyle, LPAudioPlayButtonStyle, LPPadding, LPIconBadgeStyle, LPButtonStyle, LPImageViewStyle, LPVerticalTextStackViewStyle;

@interface LPCaptionBarStyle : NSObject

@property (readonly, nonatomic) LPImageViewStyle *leadingIcon;
@property (readonly, nonatomic) LPImageViewStyle *trailingIcon;
@property (readonly, nonatomic) LPIconBadgeStyle *leadingIconBadge;
@property (readonly, nonatomic) LPIconBadgeStyle *trailingIconBadge;
@property (readonly, nonatomic) LPCaptionBarAccessoryStyle *leadingAccessory;
@property (readonly, nonatomic) LPCaptionBarAccessoryStyle *trailingAccessory;
@property (readonly, nonatomic) LPVerticalTextStackViewStyle *textStack;
@property (retain, nonatomic) LPPointUnit *minimumWidth;
@property (readonly, nonatomic) LPAudioPlayButtonStyle *playButton;
@property (readonly, retain, nonatomic) LPPadding *playButtonPadding;
@property (retain, nonatomic) LPButtonStyle *button;
@property (nonatomic) BOOL usesOutOfLineButton;
@property (nonatomic) BOOL canAddLineForButton;
@property (nonatomic) BOOL positionButtonRelativeToTextStack;
@property (nonatomic) BOOL buttonRespectsTextStackPadding;
@property (nonatomic) BOOL buttonIgnoresTextSafeAreaInsets;
@property (nonatomic) BOOL addFullWidthLineForButton;
@property (nonatomic) BOOL alignButtonWithCaptionTextLeadingEdge;
@property (nonatomic) BOOL expandButtonToCaptionEdge;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) unsigned int minimumNumberOfLinesToVerticallyCenter;
@property (retain, nonatomic) LPCollaborationFooterStyle *collaborationFooter;

- (void).cxx_destruct;
- (id)initWithPlatform:(long long)a0 sizeClass:(unsigned long long)a1 fontScalingFactor:(double)a2;
- (id)leftAccessory;
- (id)leftIcon;
- (id)rightAccessory;
- (id)rightIcon;

@end
