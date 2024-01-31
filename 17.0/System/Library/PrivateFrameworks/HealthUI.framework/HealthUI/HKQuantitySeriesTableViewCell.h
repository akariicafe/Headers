@class NSArray;

@interface HKQuantitySeriesTableViewCell : UITableViewCell

@property (retain, nonatomic) NSArray *currentConstraints;

+ (id)reuseIdentifier;

- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)_configureLabels;
- (void)_configureLayoutForTraitCollection:(id)a0;
- (id)_makeAccessibilityConstraints;
- (id)_makeConstraints;

@end
