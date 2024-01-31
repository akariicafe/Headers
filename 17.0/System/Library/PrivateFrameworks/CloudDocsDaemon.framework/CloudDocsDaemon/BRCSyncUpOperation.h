@class NSMutableDictionary, BRCLocalItem, NSMutableOrderedSet, NSString, BRCServerZone, NSMutableArray;

@interface BRCSyncUpOperation : _BRCOperation <BRCOperationSubclass> {
    unsigned long long _requestID;
}

@property (retain, nonatomic) BRCServerZone *serverZone;
@property (retain, nonatomic) NSMutableArray *packagesInFlight;
@property (retain, nonatomic) NSMutableArray *recordsToSave;
@property (retain, nonatomic) NSMutableOrderedSet *deletedRecordIDs;
@property (retain, nonatomic) NSMutableArray *iworkUnsharedShareIDs;
@property (retain, nonatomic) NSMutableDictionary *renamedShareIDsToNames;
@property (retain, nonatomic) NSMutableArray *recordsNeedingNewSharingProtectionInfo;
@property (retain, nonatomic) NSMutableArray *recordsNeedingUpdatedSharingProtectionInfo;
@property (retain, nonatomic) BRCLocalItem *itemNeedingPCSChaining;
@property (retain, nonatomic) NSMutableDictionary *recordIDsToDeleteToEtags;
@property (retain, nonatomic) NSMutableDictionary *pluginFieldsForRecordDeletesByID;
@property (retain, nonatomic) NSMutableDictionary *conflictLosersToResolveByRecordID;
@property (retain, nonatomic) NSString *stageID;
@property (readonly, nonatomic) float cost;
@property (readonly, nonatomic) NSMutableArray *createdAppLibraryNames;
@property (copy, nonatomic) id /* block */ syncUpCompletionBlock;
@property (readonly, nonatomic) BOOL encounteredErrorOnPCSChainedItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)syncUpOperationForZone:(id)a0 maxCost:(float)a1 retryAfter:(unsigned long long *)a2;

- (void)dealloc;
- (BOOL)shouldRetryForError:(id)a0;
- (void)main;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (id)initWithZone:(id)a0;
- (id)createActivity;
- (void)_performModifyRecordsOrPCSChainOperationWithCompletion:(id /* block */)a0;
- (BOOL)_performPCSChainOperationIfNecessaryWithCompletion:(id /* block */)a0;
- (void)_performShareUpdateAndModifyRecordsWithCompletion:(id /* block */)a0;
- (void)_performUpdateSharingProtectionDataIfNecessary:(id /* block */)a0;
- (BOOL)_recordIsIWorkShareable:(id)a0;
- (void)_scheduleShareUpdateAndModifyRecordsAndZoneCreationOperation;
- (void)_setSharingFieldsOnContentRecord:(id)a0 withProtectionData:(id)a1 baseToken:(id)a2 routingKey:(id)a3 forceOverwrite:(BOOL)a4;
- (void)performShareUpdate:(id /* block */)a0;
- (BOOL)prepareWithMaxCost:(float)a0 retryAfter:(unsigned long long *)a1;

@end
