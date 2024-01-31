@interface HKHealthChartFactoryViewControllerProviderClassAdaptor : NSObject <HKHealthChartFactoryViewControllerProvider> {
    Class _providerClass;
}

- (id)createInteractiveChartViewControllerForTypeIdentifier:(id)a0 chartFactory:(id)a1 applicationItems:(id)a2 displayDate:(id)a3 preferredOverlay:(long long)a4 restorationUserActivity:(id)a5 trendModel:(id)a6 additionalChartOptions:(unsigned long long)a7;
- (id)initWithProviderClass:(Class)a0;

@end
