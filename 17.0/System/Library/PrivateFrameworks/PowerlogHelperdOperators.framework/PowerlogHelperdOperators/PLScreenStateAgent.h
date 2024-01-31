@class FBSDisplayLayoutMonitor, NSMutableDictionary, PLXPCResponderOperatorComposition, PLXPCListenerOperatorComposition, PLEntryNotificationOperatorComposition, FBSDisplayLayout, NSString;

@interface PLScreenStateAgent : PLAgent <FBSDisplayLayoutObserver>

@property (retain) FBSDisplayLayoutMonitor *mainDisplayMonitor;
@property (retain) FBSDisplayLayoutMonitor *airPlayDisplayMonitor;
@property (retain) FBSDisplayLayoutMonitor *carPlayDisplayMonitor;
@property (retain) PLXPCListenerOperatorComposition *windowModeListener;
@property (retain) NSMutableDictionary *lastScreenStateEntries;
@property (retain) NSMutableDictionary *lastLayoutMonitorEntries;
@property (retain) PLXPCListenerOperatorComposition *iconDraggingListner;
@property (retain) PLXPCListenerOperatorComposition *widgetAdditionAnimationListener;
@property (retain) PLXPCListenerOperatorComposition *widgetFlipAnimationListener;
@property (retain) PLXPCListenerOperatorComposition *springBoardAlwaysOnEnableStateListener;
@property (retain) PLXPCListenerOperatorComposition *springBoardBacklightStateChangeListener;
@property (retain) PLXPCListenerOperatorComposition *springBoardFlipbookStatisticsListener;
@property (retain) PLXPCResponderOperatorComposition *springBoardAlwaysOnEnableStateResponder;
@property (retain) PLXPCResponderOperatorComposition *springBoardBacklightStateChangeResponder;
@property (retain) PLXPCResponderOperatorComposition *springBoardFlipbookStatisticsResponder;
@property (retain) PLEntryNotificationOperatorComposition *displayCallback;
@property int displayState;
@property (retain) FBSDisplayLayout *lastDisplayLayout;
@property BOOL lastDisplayLayoutContainsLockScreen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)entryEventNoneDefinitions;
+ (id)entryAggregateDefinitions;
+ (void)load;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryAggregateDefinitionForeground;
+ (id)entryAggregateDefinitionWidgetAdditionAnimation;
+ (id)entryAggregateDefinitionWidgetFlipAnimation;
+ (id)entryEventBackwardDefinitionAlwaysOnEnableState;
+ (id)entryEventBackwardDefinitionBacklightStateChange;
+ (id)entryEventBackwardDefinitionFlipbookStatistics;
+ (id)entryEventBackwardDefinitionIconDragging;
+ (id)entryEventForwardScreenState;
+ (id)entryEventForwardWindowMode;
+ (id)entryEventPointBacklightEvent;

- (id)init;
- (void)dealloc;
- (void)log;
- (void)initOperatorDependancies;
- (void)layoutMonitor:(id)a0 didUpdateDisplayLayout:(id)a1 withContext:(id)a2;
- (void)createCarPlayAccountingEvents:(id)a0;
- (void).cxx_destruct;
- (void)logEventForwardMainScreenState:(id)a0;
- (int)GetBacklightState:(id)a0;
- (void)accountWithLayoutEntries:(id)a0;
- (unsigned long long)convertWindowingMode:(id)a0;
- (unsigned long long)convertZoomLevel:(id)a0;
- (void)createAirPlayWiFiAccountingEvent:(id)a0;
- (void)handleDisplayCallback:(id)a0;
- (void)ioReportingNotification:(id)a0 currentLayout:(id)a1;
- (void)logAggregateWidgetAdditionAnimation:(id)a0;
- (void)logAggregateWidgetFlipAnimation:(id)a0;
- (void)logEventBackwardAlwaysOnEnableState:(id)a0;
- (void)logEventBackwardBacklightStateChange:(id)a0;
- (void)logEventBackwardFlipbookStatistics:(id)a0;
- (void)logEventBackwardIconDragging:(id)a0;
- (void)logEventForwardAirPlayScreenState:(id)a0;
- (void)logEventForwardCarScreenState:(id)a0;
- (void)logEventForwardWindowMode:(id)a0;
- (void)logEventPointMainBacklightEvent:(id)a0 withContext:(id)a1;
- (id)processQuery:(id)a0 withEntryKey:(id)a1;

@end
