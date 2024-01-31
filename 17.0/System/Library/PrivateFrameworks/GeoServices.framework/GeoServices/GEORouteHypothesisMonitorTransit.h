@interface GEORouteHypothesisMonitorTransit : GEORouteHypothesisMonitor

- (id)routeName;
- (void)_recalculateETAWithRouteMatch:(id)a0;
- (void)checkRouteForLocation:(id)a0;

@end
