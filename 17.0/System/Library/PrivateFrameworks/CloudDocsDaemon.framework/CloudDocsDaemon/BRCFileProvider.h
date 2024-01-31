@class brc_task_tracker, BRCAccountSession, NSString, NSURL, NSOperationQueue, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface BRCFileProvider : NSObject <NSFileProvider> {
    NSURL *_url;
    NSOperationQueue *_queue;
    NSMutableDictionary *_presentersIDsByKey;
    NSObject<OS_dispatch_queue> *_privQueue;
    brc_task_tracker *_tracker;
}

@property (retain, nonatomic) BRCAccountSession *session;
@property (readonly, copy) NSURL *_providedItemsURL;
@property (readonly) NSOperationQueue *_providedItemsOperationQueue;
@property (readonly, copy) NSString *_fileReactorID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)prettyNameForFilePresenterID:(id)a0;

- (void)dumpToContext:(id)a0;
- (void)_providedItemAtURL:(id)a0 didGainPresenterWithID:(id)a1;
- (void)suspend;
- (void)_providedItemAtURL:(id)a0 didLosePresenterWithID:(id)a1;
- (void)_provideItemAtURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)resume;
- (void)_providedItemAtURL:(id)a0 withPresenterWithID:(id)a1 didMoveToURL:(id)a2;
- (void).cxx_destruct;
- (id)_pathForKey:(id)a0;
- (id)_keyForURL:(id)a0;
- (id)_keyForURL:(id)a0 andID:(id)a1;
- (void)_registerPresenterForItemAtURL:(id)a0 key:(id)a1 name:(id)a2 session:(id)a3;
- (void)_unregisterPresenterForKey:(id)a0;
- (id)initWithURL:(id)a0 name:(id)a1;

@end
