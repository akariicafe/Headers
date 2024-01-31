@class UILabel;
@protocol AVTAvatarAttributeEditorSectionItem;

@interface AVTAvatarAttributeEditorMulticolorPickerPlaceholderCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) id<AVTAvatarAttributeEditorSectionItem> item;

+ (id)labelFont;
+ (id)cellIdentifier;
+ (double)estimatedTitleSpaceForWidth:(double)a0;
+ (double)estimatedWidthForLabelSize:(struct CGSize { double x0; double x1; })a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
