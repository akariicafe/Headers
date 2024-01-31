@class UIColor, NSArray, UIVisualEffectView;

@interface UITableViewCellSelectedBackground : UIView {
    UIVisualEffectView *_selectionEffectsView;
}

@property (nonatomic) long long selectionStyle;
@property (retain, nonatomic) UIColor *multiselectBackgroundColor;
@property (nonatomic, getter=isMultiselect) BOOL multiselect;
@property (retain, nonatomic) UIColor *selectionTintColor;
@property (copy, nonatomic) NSArray *selectionEffects;
@property (retain, nonatomic) UIColor *noneStyleBackgroundColor;

- (void)tintColorDidChange;
- (void)updateBackgroundColor;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
