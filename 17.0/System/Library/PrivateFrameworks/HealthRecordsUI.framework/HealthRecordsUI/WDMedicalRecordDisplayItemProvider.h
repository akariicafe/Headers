@class NSUUID, HRProfile, NSArray, NSPredicate, WDMedicalRecordPagingContext, HKMultiTypeSampleIterator, HKMedicalUserDomainConcept, HKConcept, NSMutableArray, NSObject, NSDictionary;
@protocol OS_dispatch_queue;

@interface WDMedicalRecordDisplayItemProvider : NSObject <WDMedicalRecordDaySummaryDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _loadingNextPage;
}

@property (retain, nonatomic) HRProfile *profile;
@property (retain, nonatomic) HKConcept *ontologyConcept;
@property (retain, nonatomic) HKMedicalUserDomainConcept *userDomainConcept;
@property (copy, nonatomic) NSArray *preloadedRemovedRecords;
@property (nonatomic) BOOL removedRecordsOnly;
@property (retain, nonatomic) NSMutableArray *medicalRecordGroups;
@property (retain, nonatomic) NSMutableArray *dateLessGroups;
@property (retain, nonatomic) NSArray *pendingMedicalRecordGroups;
@property (retain, nonatomic) NSArray *pendingDateLessGroups;
@property (copy, nonatomic) NSArray *sampleTypes;
@property (retain, nonatomic) NSArray *sortDescriptors;
@property (retain, nonatomic) NSPredicate *accountsPredicate;
@property (copy, nonatomic) id /* block */ updateHandler;
@property (copy, nonatomic) NSUUID *targetUUID;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dataQueryQueue;
@property (retain, nonatomic) WDMedicalRecordPagingContext *pagingContext;
@property (retain, nonatomic) HKMultiTypeSampleIterator *iterator;
@property (nonatomic) BOOL shouldCancelDataCollection;
@property (nonatomic) long long displayItemOptions;
@property (readonly, copy, nonatomic) NSDictionary *additionalPredicates;
@property (retain, nonatomic) NSPredicate *filter;
@property (copy, nonatomic) NSDictionary *filterPredicatesByType;
@property (copy, nonatomic) id /* block */ errorHandler;
@property (nonatomic) long long numOfRemovedRecords;
@property (nonatomic) BOOL loadingNextPage;
@property (nonatomic) BOOL shouldClearPagingCacheOnNextReload;

+ (id)allSupportedRecordCategories;
+ (id)allSupportedSampleTypes;
+ (id)supportedRecordCategoriesByCategoryType;
+ (id)unknownRecordCategory;

- (void)reload;
- (id)removedRecords;
- (void).cxx_destruct;
- (long long)numberOfGroups;
- (id)_sortedDisplayItemGroupWithDateDisplay:(id)a0 sourceDaySummaryMapping:(id)a1;
- (void)daySummaryHasDisplayItemUpdate:(id)a0;
- (void)_commitPendingGroupsAndCallUpdateHandlerBypassGroupChangeDetermination:(BOOL)a0;
- (id)_displayItemGroupAtIndex:(long long)a0;
- (void)_displayItemGroupsForSummaryOfRecords:(id)a0 style:(long long)a1 completion:(id /* block */)a2;
- (void)_queue_processAccumulatedRecordsForPage:(id)a0;
- (void)_queue_queryForNextBatchOfData;
- (void)_queue_reload;
- (void)_queue_resetPagingCache;
- (void)_queue_resetPagingInformation;
- (void)_queue_setupIterator;
- (id)_queue_synthesizedPredicatesForMedicalType:(id)a0;
- (id)displayItemForIndexPath:(id)a0;
- (id)indexPathForRecordId:(id)a0;
- (id)initWithProfile:(id)a0 displayItemOptions:(long long)a1 sampleTypes:(id)a2 filter:(id)a3 additionalPredicates:(id)a4 sortDescriptors:(id)a5;
- (id)initWithProfile:(id)a0 ontologyConcept:(id)a1 preloadedRemovedRecords:(id)a2 removedRecordsOnly:(BOOL)a3 displayItemOptions:(long long)a4 sampleTypes:(id)a5 filter:(id)a6 additionalPredicates:(id)a7 sortDescriptors:(id)a8;
- (id)initWithProfile:(id)a0 userDomainConcept:(id)a1 preloadedRemovedRecords:(id)a2 removedRecordsOnly:(BOOL)a3 displayItemOptions:(long long)a4 sampleTypes:(id)a5 filter:(id)a6 additionalPredicates:(id)a7 sortDescriptors:(id)a8;
- (long long)numberOfDisplayItemsForGroupAtIndex:(long long)a0;
- (void)requestDataOfNextPage;
- (void)setSampleTypes:(id)a0 predicatesPerType:(id)a1 accountsPredicate:(id)a2;
- (id)sourceForGroupAtIndex:(long long)a0;
- (void)startCollectingDataUntilRecordWithUUID:(id)a0 withUpdateHandler:(id /* block */)a1;
- (void)stopCollectingData;
- (id)subtitleForGroupAtIndex:(long long)a0;
- (id)titleForGroupAtIndex:(long long)a0;

@end
