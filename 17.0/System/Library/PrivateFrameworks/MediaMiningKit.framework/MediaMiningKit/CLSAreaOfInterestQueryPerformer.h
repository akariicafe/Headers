@interface CLSAreaOfInterestQueryPerformer : CLSBusinessItemGenericQueryPerformer

+ (id)categories;
+ (double)defaultPrecision;

- (id)cache;
- (BOOL)shouldQueryItemsForRegion:(id)a0 selectedRegions:(id)a1;

@end
