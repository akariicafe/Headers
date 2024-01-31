@class NSDictionary;

@interface STDeviceActivityDataSourceInterface : NSObject

@property (class, readonly, copy) NSDictionary *deviceIdentifiersByUserAltDSID;
@property (class, readonly, copy) NSDictionary *deviceIdentifierByCoreDuetIdentifier;

+ (void)setGenesisDate:(id)a0;
+ (void)weeklyNotificationPayloadUsingCoreDuetIdentifiers:(id)a0 userAltDSID:(id)a1 completionHandler:(id /* block */)a2;

@end
