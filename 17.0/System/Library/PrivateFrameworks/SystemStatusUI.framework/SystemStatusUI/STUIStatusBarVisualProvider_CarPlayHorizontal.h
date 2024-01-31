@class NSDictionary, NSLayoutConstraint;

@interface STUIStatusBarVisualProvider_CarPlayHorizontal : STUIStatusBarVisualProvider_CarPlay

@property (retain, nonatomic) NSDictionary *orderedDisplayItemPlacements;
@property (retain, nonatomic) NSLayoutConstraint *driverSideConstraint;

+ (struct CGSize { double x0; double x1; })intrinsicContentSizeForOrientation:(long long)a0;

- (void).cxx_destruct;
- (id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)a0;
- (id)setupInContainerView:(id)a0;

@end
