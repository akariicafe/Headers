@class NSDictionary;

@interface ScreenTimeCore.STDeviceActivityDataSource : NSObject

@property (class, nonatomic, readonly) NSDictionary *deviceIdentifiersByUserAltDSID;
@property (class, nonatomic, readonly) NSDictionary *deviceIdentifierByCoreDuetIdentifier;

+ (void)setGenesisDate:(id)a0;
+ (void)weeklyNotificationPayloadWithCoreDuetIdentifiers:(id)a0 userAltDSID:(id)a1 completionHandler:(id /* block */)a2;

- (id)init;
- (void).cxx_destruct;

@end
