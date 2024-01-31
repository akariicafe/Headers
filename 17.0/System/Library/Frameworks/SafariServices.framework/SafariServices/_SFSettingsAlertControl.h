@class _SFSettingsAlertItem, NSString, _SFSettingsAlertItemBackgroundView, UIImage, NSAttributedString;
@protocol SFSettingsAlertItemViewDelegate;

@interface _SFSettingsAlertControl : UIControl <SFSettingsAlertItemView>

@property (weak, nonatomic) _SFSettingsAlertItem *item;
@property (nonatomic) BOOL hidesSeparator;
@property (readonly, nonatomic) _SFSettingsAlertItemBackgroundView *backgroundView;
@property (nonatomic) long long defaultBackgroundMode;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (copy, nonatomic) NSString *detailText;
@property (copy, nonatomic) NSAttributedString *attributedDetailText;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) long long backgroundMode;
@property (weak, nonatomic) id<SFSettingsAlertItemViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateBackgroundView;
- (void)setHighlighted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
