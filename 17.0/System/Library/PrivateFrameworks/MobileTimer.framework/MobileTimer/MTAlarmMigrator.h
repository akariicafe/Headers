@class MTAlarm, NSMutableArray;

@interface MTAlarmMigrator : NSObject

@property (retain, nonatomic) NSMutableArray *alarms;
@property (retain, nonatomic) MTAlarm *sleepAlarm;

- (void).cxx_destruct;
- (void)cleanUpOldNotifications;
- (void)migrateFromOldStorage;
- (void)removeFromOldStorage;

@end
