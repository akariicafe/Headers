@class NSDictionary;

@interface _UIStatusBarVisualProvider_CarPlayVertical : _UIStatusBarVisualProvider_CarPlay

@property (retain, nonatomic) NSDictionary *orderedDisplayItemPlacements;

+ (struct CGSize { double x0; double x1; })intrinsicContentSizeForOrientation:(long long)a0;

- (void).cxx_destruct;
- (void)itemCreated:(id)a0;
- (id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)a0;
- (id)setupInContainerView:(id)a0;

@end
