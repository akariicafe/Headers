@class NSArray, NSMutableDictionary, NSMutableSet, BRCAppLibrary, NSMutableArray;

@interface BRCPCSChainBatchInfo : NSObject {
    NSMutableArray *_fullyChainRecordBatch;
    NSMutableDictionary *_fullyChainRecordInfoMap;
    NSMutableSet *_alreadyHalfChainedRecords;
    NSMutableArray *_recordsForFirstPhase;
    BRCAppLibrary *_appLibrary;
    BOOL _should2PhasePCSChain;
}

@property (readonly, nonatomic) unsigned long long batchCount;
@property (readonly, nonatomic) unsigned long long chainedRecordsCount;
@property (readonly, nonatomic) NSArray *recordsForFirstPhase;
@property (readonly, nonatomic) NSArray *recordsForSecondPhase;
@property (readonly, nonatomic) NSMutableDictionary *halfChainedRecordMap;
@property (readonly, nonatomic) BOOL should2PhasePCSChain;

- (void).cxx_destruct;
- (void)_chainPreppedRecordToParent:(id)a0;
- (void)addFullyChainedRecordInfo:(id)a0;
- (void)chainPreparedRecordBatch:(id)a0;
- (BOOL)containsRecordInfo:(id)a0;
- (id)initWithAppLibrary:(id)a0;
- (void)prepareFirstPhaseRecordBatch;

@end
