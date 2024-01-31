@class NSMutableDictionary, NSString, NSFileManager, NSURL, NSDictionary, NSArray, NSData;

@interface CLConditionLedger : NSObject {
    NSData *_encryptionKey;
    NSMutableDictionary *_recordTable;
}

@property (readonly, getter=defaultFileManager) NSFileManager *fileManager;
@property (readonly, nonatomic) NSString *ledgerName;
@property (readonly, nonatomic) NSURL *ledgerFile;
@property (readonly, getter=allMonitoringRecordsByIdentifier) NSDictionary *monitoredRecordsByIdentifier;
@property (readonly, getter=allMonitoringIdentifiers) NSArray *monitoredIdentifiers;

- (void)dealloc;
- (BOOL)writeToFile;
- (void)addRecordForMonitoring:(id)a0 identifier:(id)a1;
- (void)deleteLedgerFile;
- (BOOL)directoryExists:(id)a0;
- (id)initWithStoreType:(long long)a0 domain:(long long)a1 monitorConfiguration:(id)a2;
- (id)monitoringRecordForIdentifier:(id)a0;
- (void)readConditionsFromFile;
- (void)removeRecordFromMonitoringWithIdentifier:(id)a0;
- (void)setLedgerForType:(long long)a0 domain:(long long)a1 monitor:(id)a2 client:(id)a3 path:(id)a4;
- (void)updateEvent:(id)a0 forIdentifier:(id)a1;
- (void)updateRecord:(id)a0 identifier:(id)a1;

@end
