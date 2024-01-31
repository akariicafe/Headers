@class NSArray, NSString, AVWeakReference, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface AVCaptureDeferredPhotoProcessor : NSObject {
    NSString *_applicationIDOverride;
    NSObject<OS_dispatch_queue> *_fcdppQueue;
    struct OpaqueFigCaptureDeferredPhotoProcessor { } *_fcdpp;
    AVWeakReference *_weakReference;
    struct OpaqueFigSimpleMutex { } *_requestsLock;
    NSMutableArray *_requests;
}

@property (readonly, nonatomic) NSArray *persistentlyStoredDeferredPhotoProxies;

+ (void)initialize;
+ (id)sharedPhotoProcessorForApplicationID:(id)a0;
+ (id)sharedPhotoProcessor;

- (void)setPaused:(BOOL)a0;
- (void)dealloc;
- (BOOL)isPaused;
- (void)_handleNotification:(struct __CFString { } *)a0 payload:(id)a1;
- (void)cancelAllPrewarming;
- (void)deletePersistentStorageForPhotoProxy:(id)a0;
- (void)prewarmWithSettings:(id)a0;
- (void)processPhotoProxy:(id)a0 queuePosition:(id)a1 delegate:(id)a2;
- (void)_dispatchFailureCallbacks:(unsigned int)a0 forProcessingRequest:(id)a1 error:(id)a2;
- (int)_establishServerConnection;
- (void)_handleDidFinishProcessingPhotoProxyNotificationWithPayload:(id)a0 forRequest:(id)a1;
- (void)_handleServerConnectionDiedSendingClientNotification:(BOOL)a0;
- (void)_handleWillBeginProcessingPhotoProxyNotificationWithPayload:(id)a0 forRequest:(id)a1;
- (id)_processingRequestForCaptureRequestIdentifier:(id)a0;
- (void)_setFigCaptureDeferredPhotoProcessor:(struct OpaqueFigCaptureDeferredPhotoProcessor { } *)a0;
- (BOOL)cancelProcessingForPhotoProxy:(id)a0 error:(id *)a1;
- (id)initWithApplicationIDOverride:(id)a0;
- (id)prettyPrintDescriptionForContainer:(id)a0;

@end
