@class NSMutableDictionary;

@interface APOdmlDESRecordManager : APOdmlSingleton

@property (retain, nonatomic) NSMutableDictionary *desRecords;

+ (id)sharedInstance;

- (id)init;
- (id)recordForID:(id)a0 placementType:(unsigned long long)a1;
- (void)updateAdData:(id)a0 event:(long long)a1 forRecordID:(id)a2;
- (void)addAdListToDES:(id)a0 forRecordID:(id)a1 placementType:(unsigned long long)a2;
- (void).cxx_destruct;

@end
