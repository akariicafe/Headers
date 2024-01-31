@class UIVibrancyEffect, UIColor, UIBlurEffect, UIFont;

@interface UIKBUndoStyling : NSObject

@property (retain, nonatomic) UIBlurEffect *backgroundBlurEffect;
@property (retain, nonatomic) UIVibrancyEffect *backgroundVibrancyEffect;
@property (retain, nonatomic) UIColor *HUDbackgroundColor;
@property (retain, nonatomic) UIColor *HUDShadowColor;
@property (retain, nonatomic) UIColor *buttonGlyphColorEnabled;
@property (retain, nonatomic) UIColor *buttonGlyphColorPressed;
@property (retain, nonatomic) UIColor *buttonGlyphColorDisabled;
@property (retain, nonatomic) UIColor *elementBackgroundColor;
@property (retain, nonatomic) UIColor *elementCoverColor;
@property (nonatomic) BOOL undoRedoIconOnly;
@property (nonatomic) BOOL cutCopyPasteIconOnly;
@property (nonatomic) BOOL tooSmallForInstructionalText;
@property (nonatomic) BOOL isRTL;
@property (nonatomic) double undoControlMinWidth;
@property (nonatomic) double cutControlMinWidth;
@property (nonatomic) long long appearance;
@property (readonly, nonatomic) UIFont *undoInteractiveControlLabelFont;
@property (readonly, nonatomic) UIFont *undoStateControlLabelFont;
@property (readonly, nonatomic) UIFont *undoStateControlUnavailableLabelFont;

- (void).cxx_destruct;
- (void)createDynamicColors;
- (id)initWithKeyboardAppearance:(long long)a0 isRTL:(BOOL)a1;
- (id)vibrancyEffectForBlur:(id)a0;

@end
