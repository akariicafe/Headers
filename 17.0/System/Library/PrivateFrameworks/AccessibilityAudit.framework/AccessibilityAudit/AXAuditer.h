@class NSArray, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, AXAuditerDelegate;

@interface AXAuditer : NSObject <AXAuditCategoryResultDelegate, AXAuditCategoryDelegate>

@property (retain, nonatomic) NSArray *_auditCategories;
@property (retain, nonatomic) NSMutableArray *_results;
@property (retain, nonatomic) NSArray *_currentTypesToAuditFor;
@property (weak, nonatomic) id<AXAuditerDelegate> delegate;
@property (nonatomic) int targetPid;
@property (nonatomic) unsigned long long categoryType;
@property (retain, nonatomic) NSMutableArray *currentRunningCategories;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *auditQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)init;
- (id)_currentTime;
- (void).cxx_destruct;
- (void)_runCategories:(id)a0;
- (id)_allCategoriesDescription;
- (id)_auditCategoryForClass:(Class)a0;
- (void)_clearCurrentRunningCategories;
- (void)_initializeAuditCategories;
- (id)allSupportedAuditTypes;
- (void)auditCategory:(id)a0 didEncounterIssue:(id)a1;
- (void)auditCategoryResult:(id)a0 didAppendLogWithMessage:(id)a1;
- (id)detectionResultsFromImageData:(id)a0;
- (void)didCompleteCategory:(id)a0;
- (void)runCategories:(id)a0;
- (void)startWithAuditTypes:(id)a0;

@end
