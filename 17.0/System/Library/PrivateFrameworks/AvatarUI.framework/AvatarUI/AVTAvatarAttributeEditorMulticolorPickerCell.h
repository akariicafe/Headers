@class UILabel, CALayer, UIButton;
@protocol AVTAvatarAttributeEditorMulticolorPickerCellDelegate, AVTAvatarAttributeEditorSectionItem;

@interface AVTAvatarAttributeEditorMulticolorPickerCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) CALayer *colorView;
@property (retain, nonatomic) UIButton *clearButton;
@property (retain, nonatomic) id<AVTAvatarAttributeEditorSectionItem> item;
@property (weak, nonatomic) id<AVTAvatarAttributeEditorMulticolorPickerCellDelegate> delegate;

+ (id)labelFont;
+ (id)cellIdentifier;
+ (double)estimatedTitleSpaceForWidth:(double)a0 isRemovable:(BOOL)a1 isSelected:(BOOL)a2;
+ (double)estimatedWidthForLabelSize:(struct CGSize { double x0; double x1; })a0 isRemovable:(BOOL)a1 isSelected:(BOOL)a2;

- (BOOL)isRTL;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)a0;
- (BOOL)isRemovable;
- (void)updateColor;
- (void)applyDefaultAppearanceForStyle:(long long)a0;
- (void)applyAppearanceForSelected:(BOOL)a0;
- (void)applySelectedAppearanceForStyle:(long long)a0;
- (void)didTapClearButton:(id)a0;
- (BOOL)isShowingRemoveButton;
- (void)layoutForLTR;
- (void)layoutForRTL;
- (BOOL)shouldShowColorBorder;
- (void)showDropShadow;
- (void)updateColorViewBorder;

@end
