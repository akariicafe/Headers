@interface CALNNotificationRecordsDiffApplier : NSObject

+ (void)applyDiff:(id)a0 toNotificationManager:(id)a1;
+ (void)refreshNotificationManager:(id)a0 withNotificationRecords:(id)a1 forSourceWithIdentifier:(id)a2 filteredBySourceClientIDs:(id)a3;

@end
