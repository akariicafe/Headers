@class DESRecordStore, NSUUID, NSString, APOdmlSettings, NSDictionary, NSMutableArray, NSMutableDictionary;

@interface APOdmlDESRecord : NSObject

@property (retain, nonatomic) DESRecordStore *recordStore;
@property (retain, nonatomic) NSUUID *recordIdentifier;
@property (nonatomic) BOOL shouldMakeRecord;
@property (retain, nonatomic) NSString *recordID;
@property (retain, nonatomic) NSMutableArray *postWriteOperations;
@property BOOL writingInProgress;
@property (nonatomic) unsigned long long placementType;
@property (retain, nonatomic) APOdmlSettings *runtimeOdmlSettings;
@property (retain, nonatomic) APOdmlSettings *counterfactualOdmlSettings;
@property (retain, nonatomic) NSDictionary *deviceFeatures;
@property (retain, nonatomic) NSMutableDictionary *adRecords;

- (id)recordData;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)addAdListToDES:(id)a0;
- (id)featureForKey:(id)a0 assetManagerType:(unsigned long long)a1;
- (id)initWithRecordID:(id)a0 placementType:(unsigned long long)a1;
- (void)updateAd:(id)a0 event:(long long)a1;
- (void)writeDESRecord:(id /* block */)a0;
- (void)commonInit:(id)a0 placementType:(unsigned long long)a1;
- (void)handleSaveCompletion:(id)a0 error:(id)a1 completionHandler:(id /* block */)a2;
- (id)onDeviceFeatures;
- (void)performAfterWrite:(id /* block */)a0;
- (void)saveDESRecord:(id)a0 info:(id)a1 completionHandler:(id /* block */)a2;

@end
