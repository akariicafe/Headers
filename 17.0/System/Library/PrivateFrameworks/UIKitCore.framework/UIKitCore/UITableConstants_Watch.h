@interface UITableConstants_Watch : UITableConstants_Phone

+ (id)sharedConstants;

- (struct _UITableConstantsBackgroundProperties { BOOL x0; id x1; id x2; BOOL x3; long long x4; long long x5; double x6; double x7; BOOL x8; id x9; long long x10; double x11; struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } x12; })defaultHeaderFooterBackgroundPropertiesForTableViewStyle:(long long)a0 cellConfigurationState:(id)a1 traitCollection:(id)a2 floating:(BOOL)a3;
- (BOOL)useChromelessSectionHeadersAndFootersForTableStyle:(long long)a0;
- (long long)defaultHeaderFooterPinningBehaviorForTableStyle:(long long)a0;
- (id)defaultCheckmarkImageForCell:(id)a0;

@end
