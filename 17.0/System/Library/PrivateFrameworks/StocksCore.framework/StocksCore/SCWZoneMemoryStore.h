@class CKServerChangeToken, NSArray, NSDate;

@interface SCWZoneMemoryStore : NSObject <SCWZoneStore>

@property (copy, nonatomic) NSDate *lastSyncDate;
@property (copy, nonatomic) NSDate *lastDirtyDate;
@property (copy, nonatomic) CKServerChangeToken *serverChangeToken;
@property (copy, nonatomic) NSArray *serverRecords;
@property (copy, nonatomic) NSArray *pendingCommands;

- (id)init;
- (void)addPendingCommands:(id)a0;
- (void).cxx_destruct;
- (void)applyServerRecordsDiff:(id)a0;
- (void)clearPendingCommandsUpToCount:(unsigned long long)a0;

@end
