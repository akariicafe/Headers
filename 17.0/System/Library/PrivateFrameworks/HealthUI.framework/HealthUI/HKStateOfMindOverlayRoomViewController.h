@interface HKStateOfMindOverlayRoomViewController : HKOverlayRoomViewController <HKHealthChartFactoryViewControllerProviderClass> {
    void /* unknown type, empty encoding */ sleepChartFormatter;
    void /* unknown type, empty encoding */ addDataViewControllerProvider;
    void /* unknown type, empty encoding */ preferredOverlayContextLocation;
}

+ (id)createInteractiveChartViewControllerForTypeIdentifier:(id)a0 chartFactory:(id)a1 applicationItems:(id)a2 displayDate:(id)a3 preferredOverlay:(long long)a4 restorationUserActivity:(id)a5 trendModel:(id)a6 additionalChartOptions:(unsigned long long)a7;

- (void)dismissAnimated:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)contextSectionContainersForMode:(long long)a0 applicationItems:(id)a1 overlayChartController:(id)a2;
- (id)controllerTitleWithApplicationItems:(id)a0;
- (id)createChartOverlayViewController;
- (id)createViewControllerForMode:(long long)a0 displayDate:(id)a1 applicationItems:(id)a2;
- (id)initWithDisplayDate:(id)a0 applicationItems:(id)a1 mode:(long long)a2;
- (id)primaryDisplayTypeWithApplicationItems:(id)a0;
- (void)contextView:(id)a0 didTapOnInfoButtonAtIndex:(long long)a1;
- (id)initWithDisplayDate:(id)a0 applicationItems:(id)a1 sleepChartFormatter:(id)a2 addDataViewControllerProvider:(id)a3 preferredOverlay:(long long)a4;
- (id)initialSelectedContextForMode:(long long)a0 containerIndex:(long long)a1;

@end
