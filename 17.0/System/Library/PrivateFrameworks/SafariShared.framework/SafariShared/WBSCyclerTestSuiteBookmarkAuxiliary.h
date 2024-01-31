@class WBSCyclerOperation;

@interface WBSCyclerTestSuiteBookmarkAuxiliary : NSObject {
    WBSCyclerOperation *_initialClearOperation;
    WBSCyclerOperation *_resetToDAVModeOperation;
    WBSCyclerOperation *_generateDAVServerIDsForExistingBookmarksOperation;
    WBSCyclerOperation *_cloudKitMigrationOperation;
    WBSCyclerOperation *_clearLocalDataOperation;
}

@property (readonly, nonatomic) float operationBackoffRatio;

- (id)init;
- (void).cxx_destruct;
- (id)_descriptionForErrorCode:(long long)a0;
- (id)_errorWithCode:(long long)a0;
- (void)resetOperation:(long long)a0;
- (void)_attemptCloudKitMigrationWithCompletionHandler:(id /* block */)a0;
- (void)_attemptInitialClearWithTarget:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (void)_attemptResetToDAVModeWithCompletionHandler:(id /* block */)a0;
- (void)_attemptToClearDataWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)_attemptToGenerateDAVServerIDsForExistingBookmarksWithCompletionHandler:(id /* block */)a0;
- (id)_attributeStringForBookmark:(id)a0 multiline:(BOOL)a1;
- (id)_descriptionForBookmark:(id)a0;
- (id)_errorWithCode:(long long)a0 userInfo:(id)a1;
- (id)_expandedDescriptionForBookmark:(id)a0;
- (id)_formattedStringForBookmark:(id)a0 indentationLevel:(unsigned long long)a1;
- (void)fetchAndValidateBookmarksWithExpectedBookmarks:(id)a0 context:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)hasPerformedOperation:(long long)a0;
- (void)performOperation:(long long)a0 withTarget:(id)a1 completionHandler:(id /* block */)a2;
- (void)performOperation:(long long)a0 withTarget:(id)a1 options:(id)a2 completionHandler:(id /* block */)a3;
- (id)validateBookmarks:(id)a0 expectingBookmarks:(id)a1 context:(id)a2;

@end
