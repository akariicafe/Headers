@class NSString, NSMutableSet, NSDate, MNTrafficIncidentAlert, MNLocation;
@protocol MNTrafficIncidentAlertUpdaterDelegate;

@interface MNTrafficIncidentAlertUpdater : NSObject {
    MNLocation *_lastLocation;
    NSMutableSet *_pendingAlerts;
    MNTrafficIncidentAlert *_activeAlert;
    NSDate *_activeAlertDisplayedTime;
    NSDate *_nextAlertDisplayTime;
    int _trafficIncidentStatus;
    NSString *_previousBannerID;
    NSMutableSet *_displayedBannerIds;
}

@property (retain, nonatomic) MNTrafficIncidentAlert *activeAlert;
@property (weak, nonatomic) id<MNTrafficIncidentAlertUpdaterDelegate> delegate;
@property (nonatomic) BOOL useTriggerPointRangeBannerQueuing;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)clearAlerts;
- (void)_activateAlert:(id)a0 forLocation:(id)a1;
- (id)_nextAlert;
- (void)_removeActiveAlert;
- (void)_updateActiveAlertForLocation:(id)a0;
- (void)_updateAlertDistanceAndETAForLocation:(id)a0;
- (void)_updateForAlertsFromResponseUsingDistancePoints:(id)a0;
- (void)_updateForLocationUsingDistancePoints:(id)a0;
- (void)_updatePreviousDisplayedBannerForRequest:(id)a0;
- (void)_updateRerouteProposalStatusForRequest:(id)a0;
- (void)updateForAlertsFromResponse:(id)a0;
- (void)updateForLocation:(id)a0;
- (void)updateForReroute:(id)a0;
- (void)updateIncidentResultForETARequest:(id)a0;
- (void)updateIncidentResultForRerouteRequest:(id)a0;

@end
