@class NSLayoutConstraint, UIImageView, UIView, NCCheckmarkButton, UILabel;

@interface NCAppPickerViewCell : UICollectionViewCell {
    UIView *_backgroundView;
    NCCheckmarkButton *_checkmarkButton;
    UIImageView *_iconImageView;
    UIView *_titleAndFrequencyContainer;
    UILabel *_titleLabel;
    UIView *_frequencyLineView;
    UIView *_frequencyDotView;
    UILabel *_frequencyLabel;
    NSLayoutConstraint *_frequencyLineWidthConstraint;
    NSLayoutConstraint *_frequencyDotLeadingConstraint;
    unsigned long long _avgNumberOfNotificationsCount;
    unsigned long long _maxAvgNumberOfNotificationsCount;
}

+ (id)_titleFont;
+ (id)reuseIdentifier;
+ (id)_frequencyFont;
+ (double)preferredHeightForText:(id)a0 cellWidth:(double)a1;
+ (double)preferredImageDimension;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)_frequencyTextForCount:(unsigned long long)a0;
- (void)_layoutLine;
- (void)configureWithName:(id)a0 image:(id)a1 avgNumberOfNotificationsCount:(unsigned long long)a2 maxAvgNumberOfNotificationsCount:(unsigned long long)a3 selected:(BOOL)a4;

@end
