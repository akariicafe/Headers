@class CKServerChangeToken, NSArray, SCWZoneSchema, NSDate;

@interface SCWZoneJSONStore : NSObject <SCWZoneStore>

@property (readonly, nonatomic) SCWZoneSchema *zoneSchema;
@property (copy, nonatomic) NSDate *lastSyncDate;
@property (copy, nonatomic) NSDate *lastDirtyDate;
@property (copy, nonatomic) CKServerChangeToken *serverChangeToken;
@property (copy, nonatomic) NSArray *serverRecords;
@property (copy, nonatomic) NSArray *pendingCommands;

- (void)addPendingCommands:(id)a0;
- (void).cxx_destruct;
- (void)applyServerRecordsDiff:(id)a0;
- (id)initWithZoneSchema:(id)a0 serverRecords:(id)a1 lastSyncDate:(id)a2 lastDirtyDate:(id)a3 serverChangeToken:(id)a4 pendingCommands:(id)a5;
- (void)clearPendingCommandsUpToCount:(unsigned long long)a0;

@end
