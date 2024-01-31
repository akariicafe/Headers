@class NSDictionary, NSTimer, NSLock, NSMutableArray;

@interface VSCacheUpdateListener : NSObject {
    NSLock *_lock;
    NSMutableArray *_updateRequestQueue;
    NSDictionary *_dataProviders;
    NSTimer *_flushTimer;
    BOOL _isListening;
}

+ (id)sharedListener;
+ (id)sharedListenerIfExists;

- (id)init;
- (void)dealloc;
- (void)_enqueueRequest:(id)a0;
- (id)_initShared;
- (void)_flush;
- (void)_spokenLanguageChanged:(id)a0;
- (void)performUpdateForModelIdentifier:(id)a0 classIdentifier:(id)a1;
- (void)startListening;
- (void)stopListening;

@end
