@class HRProfile, NSMutableDictionary, NSArray, NSMutableOrderedSet, NSString, NSMutableArray, NSObject;
@protocol WDMedicalRecordSummaryDelegate, OS_dispatch_queue;

@interface WDMedicalRecordCategorySummary : NSObject <WDMedicalRecordSummarizable>

@property (retain, nonatomic) HRProfile *profile;
@property (weak, nonatomic) id<WDMedicalRecordSummaryDelegate> delegate;
@property (retain, nonatomic) NSMutableOrderedSet *allRecords;
@property (retain, nonatomic) NSMutableOrderedSet *allStandaloneRecords;
@property (retain, nonatomic) NSMutableOrderedSet *panels;
@property (retain, nonatomic) NSMutableDictionary *panelsToRecords;
@property (nonatomic) long long categoryType;
@property (retain, nonatomic) NSMutableArray *allDisplayItems;
@property (retain, nonatomic) NSMutableArray *visibleDisplayItems;
@property (retain, nonatomic) NSMutableArray *truncatedDisplayItems;
@property (nonatomic) unsigned long long truncationDisplayItemOffset;
@property (nonatomic) long long truncatedMedicalRecordCount;
@property (nonatomic) BOOL showCategoryTitle;
@property (nonatomic) BOOL displayingTruncatedRecords;
@property (nonatomic) BOOL dirty;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *summaryQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *resourceQueue;
@property (readonly, copy, nonatomic) NSArray *displayItems;
@property (readonly, copy, nonatomic) NSString *summarySortString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_appendixItemForCount:(long long)a0;
- (id)_displayItemsForGenericRecord:(id)a0 previous:(id)a1 next:(id)a2;
- (void)_displayItemsForObservation:(id)a0 previous:(id)a1 next:(id)a2 completion:(id /* block */)a3;
- (void)_displayItemsForPanel:(id)a0 completion:(id /* block */)a1;
- (void)_displayItemsForRecord:(id)a0 previous:(id)a1 next:(id)a2 completion:(id /* block */)a3;
- (void)_displayItemsForUnknownRecord:(id)a0 completion:(id /* block */)a1;
- (void)_rqueue_determinStandaloneRecords;
- (void)_rqueue_recomputeIfNeeded;
- (void)_rqueue_setNeedsCompute;
- (BOOL)_shouldConsiderRecordTruncation:(id)a0;
- (void)addMedicalRecord:(id)a0;
- (long long)additionalDisplayItemCount;
- (long long)additionalRecordCount;
- (id)initWithProfile:(id)a0 categoryType:(long long)a1 showCategoryTitle:(BOOL)a2 delegate:(id)a3;
- (void)recomputeIfNeeded;
- (void)setNeedsRecompute;
- (void)showTruncatedRecords;

@end
