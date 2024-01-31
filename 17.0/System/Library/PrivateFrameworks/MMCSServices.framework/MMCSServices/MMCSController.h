@class NSRecursiveLock, NSMutableDictionary, NSTimer, NSObject;
@protocol OS_dispatch_queue;

@interface MMCSController : NSObject {
    id _powerAssertion;
    NSTimer *_powerAssertionTimer;
    struct _mmcs_engine { } *_engine;
    struct __CFURL { } *_chunkStoreURL;
    unsigned long long _currentItemID;
    NSMutableDictionary *_requestIDToBlockMap;
    NSMutableDictionary *_requestIDToTransfersMap;
    NSMutableDictionary *_requestIDToRemainingTransfersMap;
    NSMutableDictionary *_transferToRequestIDsMap;
}

@property (readonly) NSMutableDictionary *transfers;
@property (readonly) NSMutableDictionary *transferIDToContextMap;
@property (retain) NSRecursiveLock *transferIDContextMapLock;
@property (retain) NSObject<OS_dispatch_queue> *replyQueue;
@property long long connectionBehavior;
@property (readonly) BOOL isActive;

+ (id)parseContentHeaderAsDictionary:(id)a0 treatValuesAsArrays:(BOOL)a1;
+ (void)preMMCSWarm;
+ (id)serialControllerQueue;

- (id)initWithQueue:(id)a0;
- (void)dealloc;
- (void)_releasePowerAssertion;
- (struct _mmcs_engine { } *)_engine;
- (void)_cancelRequest:(id)a0;
- (void)_registerPowerAssertionIfNeeded;
- (void)_itemCompleted:(id)a0;
- (id)_MMCSICloudRequestHeadersCopy:(struct __CFString { } *)a0;
- (void)_addPreauthorizationOptions:(id)a0 forFiles:(id)a1;
- (void)_addRequestorContext:(id)a0 transferID:(id)a1;
- (void)_getItemCompleted:(id)a0 path:(id)a1 error:(id)a2;
- (void)_getItemUpdated:(id)a0 progress:(double)a1 state:(int)a2 error:(id)a3;
- (BOOL)_getTransfers:(id)a0 requestURL:(id)a1 requestorID:(id)a2 sourceAppID:(id)a3 token:(id)a4 error:(id *)a5;
- (void)_handleRegistrationForMMCSPutFile:(id)a0 preauthenticate:(BOOL)a1 completionBlock:(id /* block */)a2;
- (void)_invalidatePowerAssertionTimer;
- (id)_optionsForFiles:(id)a0 sourceAppID:(id)a1;
- (void)_processCompletedItem:(id)a0 error:(id)a1;
- (void)_putItemCompleted:(id)a0 error:(id)a1;
- (void)_putItemUpdated:(id)a0 progress:(double)a1 state:(int)a2 error:(id)a3;
- (BOOL)_putTransfers:(id)a0 requestURL:(id)a1 requestorID:(id)a2 transferID:(id)a3 sourceAppID:(id)a4 token:(id)a5 error:(id *)a6;
- (void)_registerFiles:(id)a0 preauthenticate:(BOOL)a1 completionBlock:(id /* block */)a2;
- (void)_registerTransfers:(id)a0 preauthenticate:(BOOL)a1 completionBlock:(id /* block */)a2;
- (id)_registeredTransferForGUID:(id)a0;
- (id)_registeredTransferForItemID:(unsigned long long)a0;
- (void)_releasePowerAssertionAndSimulateCrash;
- (void)_removeRequestorContext:(id)a0 transferID:(id)a1;
- (void)_schedulePowerAssertionTimer;
- (void)_setScheduledTransfers:(id)a0 block:(id /* block */)a1;
- (void)_unregisterPowerAssertion;
- (BOOL)_unregisterTransfers:(id)a0;
- (void)cancelPutRequestID:(id)a0;
- (id)getContentHeadersAsString;
- (void)getFiles:(id)a0 requestURL:(id)a1 requestorID:(id)a2 sourceAppID:(id)a3 authToken:(id)a4 completionBlock:(id /* block */)a5;
- (void)putFiles:(id)a0 requestURL:(id)a1 requestorID:(id)a2 transferID:(id)a3 sourceAppID:(id)a4 authToken:(id)a5 preauthenticate:(BOOL)a6 completionBlock:(id /* block */)a7;
- (void)registerFilesForDownload:(id)a0 completionBlock:(id /* block */)a1;
- (void)registerFilesForUpload:(id)a0 withPreauthentication:(BOOL)a1 completionBlock:(id /* block */)a2;
- (BOOL)unregisterFiles:(id)a0;

@end
