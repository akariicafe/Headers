@class NSArray, NSObject;
@protocol CKVDonatorProvider;

@interface CKVDonateTask : NSObject {
    NSObject<CKVDonatorProvider> *_donatorProvider;
    NSObject *_bridge;
    double _timeout;
    BOOL _isMultiDataset;
    unsigned short _donateOptions;
}

@property (readonly, nonatomic) NSArray *derivativeTaskIds;

- (id)lastChangesAccepted;
- (BOOL)_isIncrementalPreferred;
- (id)init;
- (id)_getProviderBridge;
- (void)runWithType:(unsigned short)a0 reason:(unsigned short)a1 completion:(id /* block */)a2;
- (id)initWithDonatorProvider:(id)a0 multiDatasetBridge:(id)a1 timeout:(double)a2;
- (void)clearWithReason:(unsigned short)a0;
- (long long)_enumerateAndStreamFullDataset:(id)a0 fullStream:(id)a1;
- (void)_clearDataset:(id)a0;
- (id)initWithDonatorProvider:(id)a0 fullDatasetBridge:(id)a1 timeout:(double)a2;
- (id)initWithDonatorProvider:(id)a0 fullDatasetBridge:(id)a1 derivativeTaskIds:(id)a2 timeout:(double)a3;
- (void)runWithType:(unsigned short)a0 reason:(unsigned short)a1;
- (void).cxx_destruct;
- (void)_donateDataset:(id)a0 withType:(unsigned short)a1 reason:(unsigned short)a2 completion:(id /* block */)a3;
- (id)initWithDonatorProvider:(id)a0 deltaDatasetBridge:(id)a1 timeout:(double)a2;
- (id)initWithDonatorProvider:(id)a0 datasetBridge:(id)a1 timeout:(double)a2 derivativeTaskIds:(id)a3 donateOptions:(unsigned short)a4;
- (void)_clearAllDatasets;
- (void)_donateAllDatasets:(unsigned short)a0 withReason:(unsigned short)a1 completion:(id /* block */)a2;
- (long long)_enumerateAndStreamDeltaDataset:(id)a0 fullStream:(id)a1 incrementalStream:(id)a2;
- (id)modifiedItemIdsWithDatabaseSearcher:(id)a0;

@end
