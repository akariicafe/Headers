@interface OKMediaLocationZoneClusterPredicate : OKMediaClusterPredicate

@property (readonly) double distance;

- (void)dealloc;
- (id)title;
- (id)initWithDistance:(double)a0;
- (id)_containsInSet:(id)a0 withinItems:(id)a1 distance:(double)a2;
- (id)_titleWithPlacemark:(id)a0;
- (float)efficiencyForItems:(id)a0;
- (id)evaluateItems:(id)a0 progressBlock:(id /* block */)a1;

@end
