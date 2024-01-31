@class AMSDialogAction, UIFont, UIColor;

@interface AMSUIMessageButton : AMSUICommonButton

@property (nonatomic) unsigned long long messageStyle;
@property (nonatomic) BOOL isFooterButton;
@property (readonly, nonatomic) AMSDialogAction *dialogAction;
@property (retain, nonatomic) UIFont *preferredFont;
@property (retain, nonatomic) UIColor *preferredForegroundColor;
@property (retain, nonatomic) UIColor *preferredBackgroundColor;

+ (id)_defaultConfiguration;

- (id)_symbolConfiguration;
- (void)_refresh;
- (void)dealloc;
- (BOOL)canBecomeFocused;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)_chevronImage;
- (void)_setAccessibilityIdentifier;
- (id)_appendChevronToString:(id)a0;
- (void)_axSettingsDidUpdate:(id)a0;
- (id)_closeImage;
- (void)_endObservations;
- (void)_setAXSettings;
- (void)_setImagePadding;
- (void)_setupWithDialogAction:(id)a0;
- (void)_startObservations;
- (id)initWithDialogAction:(id)a0 messageStyle:(unsigned long long)a1;
- (BOOL)isDefaultCloseButton;
- (void)setFooterStyle;

@end
