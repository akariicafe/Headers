@class NSMutableDictionary, CPLChangeBatch, NSString, NSArray, CPLRecordTargetMapping, NSDictionary, NSMutableSet;
@protocol CPLBeforeUploadCheckItemsProvider;

@interface CPLBeforeUploadCheckItems : NSObject {
    NSDictionary *_items;
    NSDictionary *_foundRecords;
    NSMutableSet *_recordsToFetch;
    NSMutableDictionary *_nonAssetsWithResourcesToUpload;
    NSMutableDictionary *_assetsWithResourcesToUpload;
    NSMutableDictionary *_additionalRecords;
    NSMutableSet *_fetchRules;
    NSMutableDictionary *_itemsToReinject;
}

@property (readonly, nonatomic) CPLChangeBatch *originalBatch;
@property (readonly, nonatomic) CPLRecordTargetMapping *targetMapping;
@property (readonly, nonatomic) id<CPLBeforeUploadCheckItemsProvider> provider;
@property (readonly, nonatomic) long long ruleGroups;
@property (readonly, nonatomic) unsigned long long pushRepositoryPriority;
@property (copy, nonatomic) NSString *sharingScopeIdentifier;
@property (readonly, nonatomic) NSArray *recordsToFetch;
@property (readonly, nonatomic) NSArray *fetchRules;
@property (readonly, nonatomic) NSArray *recordsNeedingGeneratedDerivatives;
@property (readonly, nonatomic) NSDictionary *itemsToReinject;
@property (readonly, nonatomic) CPLChangeBatch *batchToUpload;
@property (readonly, nonatomic) BOOL shouldResetExceedingQuotaOnSuccessfulUpload;
@property (readonly, nonatomic) unsigned long long countOfAssetsWithResourcesToUpload;
@property (readonly, nonatomic) unsigned long long estimatedUploadResourceSize;
@property (readonly, nonatomic) BOOL willUploadSomeResources;
@property (readonly, nonatomic) BOOL hasDroppedSomeResources;

- (void).cxx_destruct;
- (void)addAdditionalRecordWithScopedIdentifierToUploadBatch:(id)a0;
- (BOOL)checkBatchWithFoundRecords:(id)a0 error:(id *)a1;
- (id)initWithBatch:(id)a0 targetMapping:(id)a1 ruleGroups:(long long)a2 pushRepositoryPriority:(unsigned long long)a3 provider:(id)a4;
- (void)itemShouldBeReinjectedInPushRepository:(id)a0;
- (void)itemWillDropResourceChange:(id)a0;
- (id)itemWithScopedIdentifier:(id)a0;
- (BOOL)prepareBatchBeforeUploadWithError:(id *)a0;
- (id)recordFromTransportWithScopedIdentifier:(id)a0;
- (BOOL)requestFetchOfRecordWithScopedIdentifier:(id)a0 forItem:(id)a1 rule:(id)a2 error:(id *)a3;
- (BOOL)transportHasRecordWithScopedIdentifier:(id)a0;
- (id)willUploadCloudResource:(id)a0 localResource:(id)a1 forItem:(id)a2 error:(id *)a3;

@end
