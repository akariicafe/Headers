@class NSHashTable, NSXPCConnection;

@interface MSPMapsPushDaemonRemoteProxy : NSObject <MSPMapsPushDaemonProxyObserver, MSPMapsPushDaemonProxy> {
    NSXPCConnection *_connection;
    NSHashTable *_observers;
}

+ (id)sharedInstance;

- (void)closeConnection;
- (id)_remoteObjectProxy;
- (id)_connection;
- (id)init;
- (void)removeObserver:(id)a0;
- (void)handleMapsApplicationRemoval:(id /* block */)a0;
- (void)clearVenueBulletin;
- (void)_connectToDaemonIfNeeded;
- (void)simulateProblemResolution;
- (void)clearCurrentAnnouncement;
- (void)fetchCurrentAnnouncement:(id /* block */)a0;
- (void)resetAnnouncements;
- (void)fetchDevicePushToken:(id /* block */)a0;
- (void)showMapsSuggestionsBulletinWithTitle:(id)a0 message:(id)a1 actionURL:(id)a2;
- (void)showAirportArrivalBulletinWithTitle:(id)a0 message:(id)a1 mapRegion:(id)a2 regionName:(id)a3;
- (void)clearBulletinWithRecordID:(id)a0;
- (void)_clearConnection;
- (void)showVenueBulletinWithTitle:(id)a0 message:(id)a1 actionURL:(id)a2;
- (void)clearPredictedRouteTrafficIncidentBulletin;
- (void)clearParkedCarBulletin;
- (void)clearLowFuelAlertBulletin;
- (void).cxx_destruct;
- (void)showLowFuelAlertBulletinForLowFuelDetails:(id)a0;
- (void)clearTrafficIncidentBulletinWithAlertID:(id)a0;
- (void)clearAirportArrivalBulletin;
- (void)showParkedCarBulletinForEvent:(id)a0;
- (void)clearMapsSuggestionsBulletin;
- (void)simulateUGCPhotoAttributionClearedNotification;
- (void)showParkedCarReplacementBulletinForEvent:(id)a0 replacingEvent:(id)a1;
- (void)pushDaemonProxyReceivedNotificationData:(id)a0 forType:(id)a1 recordIdentifier:(id)a2;
- (void)simulateUGCPhotoSubmissionResolution;
- (void)addObserver:(id)a0;
- (void)showTrafficIncidentAlertWithID:(id)a0 withReroute:(BOOL)a1 title:(id)a2 description:(id)a3;
- (void)simulateRAPStatusChangeNotification;
- (void)showPredictedRouteTrafficIncidentBulletinForCommuteDetails:(id)a0;

@end
