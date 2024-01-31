@class NSString, CPLBeforeUploadCheckItems, NSMutableDictionary, CPLScopedIdentifier, CPLRecordTarget, NSMutableSet, CPLResourceTypeSet, CPLRecordChange;

@interface CPLBeforeUploadCheckItem : NSObject {
    NSMutableSet *_rulesForRecordFetch;
    NSMutableDictionary *_rulesForOtherRecordFetches;
    BOOL _hasCachedResultOfServerCheck;
    BOOL _recordExistsOnServer;
    CPLRecordChange *_recordOnServer;
    BOOL _checked;
    NSString *_dropReason;
    CPLResourceTypeSet *_resourcesToGenerateImageDerivatives;
    CPLResourceTypeSet *_resourcesToGenerateVideoComplementDerivatives;
    BOOL _needsToGenerateImageDerivatives;
    BOOL _needsToGenerateVideoComplementDerivatives;
}

@property (readonly, nonatomic) long long ruleGroups;
@property (readonly, nonatomic) CPLScopedIdentifier *scopedIdentifier;
@property (readonly, nonatomic) CPLRecordChange *change;
@property (readonly, nonatomic) Class changeClass;
@property (readonly, nonatomic) BOOL isAsset;
@property (readonly, nonatomic) BOOL isTrashedOrDeletedAsset;
@property (readonly, nonatomic) BOOL needsToGenerateDerivatives;
@property (readonly, weak, nonatomic) CPLBeforeUploadCheckItems *items;
@property (readonly, nonatomic) BOOL hasRequestedRecordFetch;
@property (readonly, nonatomic) unsigned long long estimatedResourceUploadSize;
@property (readonly, nonatomic) unsigned long long pushRepositoryPriority;
@property (readonly, nonatomic) CPLRecordTarget *target;

- (id)redactedDescription;
- (id)description;
- (void).cxx_destruct;
- (BOOL)prepareWithError:(id *)a0;
- (BOOL)_addRelatedRecordWithScopedIdentifierToAdditionalRecords:(id)a0 provider:(id)a1 error:(id *)a2;
- (void)_bumpPushRepositoryPriority:(unsigned long long)a0 reason:(id)a1;
- (BOOL)_forAdditionalRecordRule:(id)a0 check:(void /* function */ *)a1 error:(id *)a2;
- (BOOL)_forRule:(id)a0 check:(void /* function */ *)a1 error:(id *)a2;
- (BOOL)_serverResourcesMatches:(id)a0;
- (BOOL)checkBeforeUploadWithError:(id *)a0;
- (void)dropChangeWithReason:(id)a0;
- (BOOL)dropGeneratingDerivativesIfPossibleWithRecordOnServer:(id)a0 error:(id *)a1;
- (void)dropResourceChangeWithReason:(id)a0;
- (void)dropSharingChangeWithReason:(id)a0;
- (id)initWithChange:(id)a0 checkItems:(id)a1;
- (void)reinjectChangeWithReason:(id)a0;
- (BOOL)rejectChangeWithReason:(id)a0 error:(id *)a1;
- (BOOL)requestFetchForRule:(id)a0 error:(id *)a1;
- (BOOL)requestFetchOfRecordWithScopedIdentifier:(id)a0 forRule:(id)a1 error:(id *)a2;
- (void)updatePushRepositoryPriorityWithRecordOnServer:(id)a0;

@end
