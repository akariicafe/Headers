@class UIImageView, NSArray;

@interface HUMediaServiceTitleValueCell : HUTitleValueCell

@property (retain, nonatomic) UIImageView *serviceIconView;
@property BOOL iconImageLoadingInProgress;
@property (retain, nonatomic) NSArray *constraints;

- (void)updateConstraints;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)_loadServiceIconImage;
- (void)_updateContentMetrics;
- (void)updateUIWithAnimation:(BOOL)a0;

@end
