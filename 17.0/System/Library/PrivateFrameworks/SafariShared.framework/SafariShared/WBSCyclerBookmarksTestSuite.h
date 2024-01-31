@class NSArray, NSString, WBSCyclerTestSuiteBookmarkAuxiliary, WBSCyclerIterationCounter, WBSCyclerOperationContext, WBSCyclerItemListRepresentation;

@interface WBSCyclerBookmarksTestSuite : NSObject <WBSCyclerOperationalTestSuite> {
    WBSCyclerOperationContext *_operationContext;
    WBSCyclerTestSuiteBookmarkAuxiliary *_bookmarkAuxiliary;
    WBSCyclerItemListRepresentation *_expectedTopLevelBookmarksFromPreviousIteration;
}

@property (readonly, copy, nonatomic) NSArray *operations;
@property (readonly, nonatomic, getter=isFinished) BOOL finished;
@property (retain, nonatomic) WBSCyclerIterationCounter *iterationCounter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)setValue:(id)a0 forConfigurationKey:(id)a1;

- (void)setUp;
- (id)init;
- (void)tearDown;
- (BOOL)canHandleRequest:(id)a0;
- (void).cxx_destruct;
- (id)_descriptionForErrorCode:(long long)a0;
- (id)_errorWithCode:(long long)a0 userInfo:(id)a1;
- (void)_performCloudKitSecondaryMigrationAfterClearingBookmarksWithTarget:(id)a0 initialBookmarks:(id)a1 completionHandler:(id /* block */)a2;
- (void)_performFinalServerBookmarkValidationAfterClearingAndSyncingWithInitialBookmarks:(id)a0 completionHandler:(id /* block */)a1;
- (void)_validateServerBookmarksAfterClearingLocallyWithTarget:(id)a0 initialBookmarks:(id)a1 completionHandler:(id /* block */)a2;
- (void)_validateServerBookmarksAfterInitialSyncWithTarget:(id)a0 completionHandler:(id /* block */)a1;
- (void)_validateServerBookmarksWithTarget:(id)a0 completionHandler:(id /* block */)a1;
- (void)_validateServerBookmarksWithTarget:(id)a0 initialBookmarks:(id)a1 completionHandler:(id /* block */)a2;
- (void)handleRequest:(id)a0 withTarget:(id)a1 completionHandler:(id /* block */)a2;
- (id)relativeProbabilitiesForOperationsWithTopLevelItem:(id)a0;
- (void)runWithTarget:(id)a0 completionHandler:(id /* block */)a1;

@end
