@class NSString, NSMutableDictionary, BRGlobalProgressProxy, NSOperationQueue, NSMutableArray;

@interface BRUploadAllFilesForLogOutOperation : BROperation <NSProgressReporting> {
    NSMutableDictionary *_errorsByContainerID;
    NSMutableArray *_hiddenContainersWithError;
    NSOperationQueue *_opQueue;
}

@property (retain) BRGlobalProgressProxy *progress;
@property (copy) id /* block */ uploadAllFilesCompletionBlock;
@property BOOL shouldKeepDataLocal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)main;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (void)cancel;
- (void)evictAllFilesInGroup:(id)a0;

@end
