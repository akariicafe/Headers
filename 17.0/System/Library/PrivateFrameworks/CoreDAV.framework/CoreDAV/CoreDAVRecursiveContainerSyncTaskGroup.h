@class NSString, NSMutableDictionary, NSURL, NSArray, NSMutableArray, NSMutableSet;
@protocol CoreDAVLocalDBTreeInfoProvider;

@interface CoreDAVRecursiveContainerSyncTaskGroup : CoreDAVTaskGroup <CoreDAVDeleteTaskDelegate, CoreDAVPutTaskDelegate, CoreDAVTaskGroupDelegate, CoreDAVMkcolTaskDelegate, CoreDAVPropPatchTaskDelegate, CoreDAVMoveTaskDelegate> {
    int _phase;
    NSString *_nextSyncToken;
    NSString *_previousPTag;
    NSString *_nextPTag;
    NSArray *_actions;
    NSMutableArray *_unsubmittedTasks;
    NSURL *_addMemberURL;
    BOOL _useMultiGet;
    NSMutableSet *_syncReportDeletedURLs;
    NSMutableDictionary *_leafURLToETag;
    NSMutableArray *_childCollectionURL;
    Class _appSpecificDataItemClass;
    Class _appSpecificContainerItemClass;
    BOOL _syncItemOrder;
}

@property (retain, nonatomic) NSString *previousSyncToken;
@property (retain, nonatomic) NSString *nextCTag;
@property (readonly, nonatomic) NSURL *folderURL;
@property (readonly, nonatomic) NSString *previousCTag;
@property (nonatomic) BOOL preflightCTag;
@property (nonatomic) unsigned long long multiGetBatchSize;
@property (weak, nonatomic) id<CoreDAVLocalDBTreeInfoProvider> delegate;
@property (readonly, nonatomic) NSMutableDictionary *folderURLToChildrenURLOrder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)task:(id)a0 didFinishWithError:(id)a1;
- (void)taskGroupWillCancelWithError:(id)a0;
- (void)startTaskGroup;
- (void)propFindTask:(id)a0 parsedResponses:(id)a1 error:(id)a2;
- (id)dataContentType;
- (void).cxx_destruct;
- (id)copyMultiGetTaskWithURLs:(id)a0;
- (id)_copyContainerParserMappings;
- (void)cancelTaskGroup;
- (id)copyFolderMultiGetTaskWithURLs:(id)a0;
- (void)moveTask:(id)a0 parsedResponses:(id)a1 error:(id)a2;
- (void)_folderModTask:(id)a0 parsedPropStats:(id)a1 error:(id)a2;
- (void)_foundChildrenOrder:(id)a0 inFolderWithURL:(id)a1;
- (void)_getDataPayloads;
- (void)_getItemTags;
- (void)_getTask:(id)a0 finishedWithParsedContents:(id)a1 deletedItems:(id)a2 error:(id)a3;
- (void)_getTopFolderTags;
- (void)_postTask:(id)a0 didFinishWithError:(id)a1;
- (void)_pushActions;
- (unsigned long long)_submitTasks;
- (void)_syncReportTask:(id)a0 didFinishWithError:(id)a1;
- (void)_taskGroupSuccessfullyFinishedWithContents:(id)a0;
- (void)_tearDownAllUnsubmittedTasks;
- (void)bailWithError:(id)a0;
- (void)deleteTask:(id)a0 completedWithError:(id)a1;
- (id)initWithFolderURL:(id)a0 previousCTag:(id)a1 previousPTag:(id)a2 previousSyncToken:(id)a3 actions:(id)a4 syncItemOrder:(BOOL)a5 context:(id)a6 accountInfoProvider:(id)a7 taskManager:(id)a8;
- (BOOL)isWhitelistedError:(id)a0;
- (void)mkcolTask:(id)a0 parsedPropStats:(id)a1 error:(id)a2;
- (void)propPatchTask:(id)a0 parsedResponses:(id)a1 error:(id)a2;
- (void)putTask:(id)a0 completedWithNewETag:(id)a1 error:(id)a2;
- (BOOL)shouldSyncChildWithResourceType:(id)a0;
- (void)syncAway;

@end
