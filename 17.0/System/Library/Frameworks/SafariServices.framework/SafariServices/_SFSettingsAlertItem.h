@class UIView, NSString, NSArray, UIImage, NSAttributedString, UIImageView, _SFSettingsAlertButton, UIColor;
@protocol SFSettingsAlertItemView;

@interface _SFSettingsAlertItem : NSObject

@property (retain, nonatomic) id controller;
@property (copy, nonatomic) id /* block */ viewConfigurationBlock;
@property (copy, nonatomic) NSString *textStyle;
@property (copy, nonatomic) id /* block */ handler;
@property (copy, nonatomic) NSArray *subItems;
@property (readonly, weak, nonatomic) _SFSettingsAlertItem *group;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long actionType;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSAttributedString *attributedTitle;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSAttributedString *attributedSubtitle;
@property (copy, nonatomic) UIColor *tintColor;
@property (retain, nonatomic) UIImage *icon;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL enabled;
@property (copy, nonatomic) NSString *accessibilityIdentifier;
@property (nonatomic) BOOL showsIndicatorDot;
@property (retain, nonatomic) UIView *badgeView;
@property (retain, nonatomic) UIImageView *statusImageView;
@property (copy, nonatomic) NSArray *componentsArrangement;
@property (weak, nonatomic) id<SFSettingsAlertItemView> view;
@property (readonly, nonatomic) UIView<SFSettingsAlertItemView> *viewAsUIView;
@property (readonly, nonatomic) _SFSettingsAlertButton *viewAsButton;

+ (id)buttonWithTitle:(id)a0 textStyle:(id)a1 icon:(id)a2 action:(long long)a3 handler:(id /* block */)a4;
+ (id)optionGroupOptionWithAttributedTitle:(id)a0 textStyle:(id)a1 icon:(id)a2 action:(long long)a3 handler:(id /* block */)a4;
+ (id)optionsGroupWithTitle:(id)a0 action:(long long)a1 subItemAction:(long long)a2 controller:(id)a3;
+ (id)paletteWithAction:(long long)a0 controller:(id)a1;
+ (id)singleLineButtonWithTitle:(id)a0 textStyle:(id)a1 icon:(id)a2 action:(long long)a3 handler:(id /* block */)a4;
+ (id)stepperWithController:(id)a0 action:(long long)a1 handler:(id /* block */)a2;

- (void).cxx_destruct;
- (void)_buttonCommonInitWithTextStyle:(id)a0 icon:(id)a1 handler:(id /* block */)a2;
- (void)_updateButtonSubtitle;
- (void)_updateButtonTitle;
- (id)initWithType:(long long)a0 action:(long long)a1;
- (void)updateOptionsGroupDetailLabel;

@end
