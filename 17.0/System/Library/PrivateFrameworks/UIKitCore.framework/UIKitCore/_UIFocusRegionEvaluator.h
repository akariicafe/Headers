@interface _UIFocusRegionEvaluator : NSObject

+ (id)__regionsByEvaluatingOcclusionsForBaseRegions:(id)a0 occludingRegions:(id)a1 baseRegionsCanOccludeEachOther:(BOOL)a2 inSnapshot:(id)a3;
+ (id)_visibleSubregionsWhenRegion:(id)a0 occludedByRegion:(id)a1 inSnapshot:(id)a2;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForRegion:(id)a0 inCoordinateSpace:(id)a1;
+ (id)regionsByEvaluatingOcclusionsForRegions:(id)a0 inSnapshot:(id)a1;
+ (id)regionsByOccludingRegions:(id)a0 beneathRegions:(id)a1 inSnapshot:(id)a2;
+ (id)subregionFromRegion:(id)a0 withSnapshotFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inSnapshot:(id)a2;

@end
