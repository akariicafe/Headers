@class NSString, NSDictionary, NSData, NSDate, NSSet;

@interface HomeEnergyDaemon.HomeEnergyProxy : NSObject <HomeEnergyDaemon.HomeEnergyXPCProtocol> {
    void /* unknown type, empty encoding */ connection;
}

- (id)init;
- (void).cxx_destruct;
- (void)disableEnergyForecastDataCollectionForGridID:(NSString *)a0 completionHandler:(void (^)(long long))a1;
- (void)disableAllNextCleanEnergyWindowNotificationsWithCompletionHandler:(void (^)(long long))a0;
- (void)disableEnergyForecastDataCollectionWithCompletionHandler:(void (^)(long long))a0;
- (void)disableNextCleanEnergyWindowNotificationsForGridID:(NSString *)a0 completionHandler:(void (^)(long long))a1;
- (void)disableNextCleanEnergyWindowNotificationsForGridID:(NSString *)a0 homeID:(NSString *)a1 completionHandler:(void (^)(long long))a2;
- (void)dumpAllDataWithCompletionHandler:(void (^)(NSDictionary *))a0;
- (void)enableEnergyForecastDataCollectionForGridID:(NSString *)a0 completionHandler:(void (^)(long long))a1;
- (void)enableNextCleanEnergyWindowNotificationsForGridID:(NSString *)a0 notificationContext:(NSDictionary *)a1 completionHandler:(void (^)(long long))a2;
- (void)energyWindowsFor:(NSString *)a0 withCaching:(BOOL)a1 completionHandler:(void (^)(NSData *))a2;
- (void)energyWindowsForGridID:(NSString *)a0 fromDate:(NSDate *)a1 endDate:(NSDate *)a2 withCaching:(BOOL)a3 completionHandler:(void (^)(NSData *))a4;
- (void)gridIDLookupWithCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 completionHandler:(void (^)(NSString *))a1;
- (void)isNextCleanEnergyWindowNotificationEnabledForGridID:(NSString *)a0 homeID:(NSString *)a1 completionHandler:(void (^)(long long))a2;
- (void)testDelegateForGridIds:(NSSet *)a0 completionHandler:(void (^)(void))a1;
- (void)testNotificationsForGridID:(NSString *)a0 notificationContext:(NSDictionary *)a1 completionHandler:(void (^)(NSString *))a2;
- (void)testSetMockURLSessionWithCompletionHandler:(void (^)(void))a0;
- (void)useMockDataWithFilePath:(NSString *)a0 disableMock:(BOOL)a1 validityDate:(NSDate *)a2 completionHandler:(void (^)(void))a3;

@end
