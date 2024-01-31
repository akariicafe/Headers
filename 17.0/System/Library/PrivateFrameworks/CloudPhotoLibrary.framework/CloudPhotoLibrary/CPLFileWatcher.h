@class NSURL, NSString, NSObject;
@protocol OS_dispatch_queue, CPLFileWatcherDelegate, OS_dispatch_source;

@interface CPLFileWatcher : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_nodeSource;
    NSObject<OS_dispatch_source> *_parentSource;
    unsigned long long _nodeInode;
}

@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly, nonatomic) NSString *name;
@property (weak, nonatomic) id<CPLFileWatcherDelegate> delegate;

- (void)_stopWatchingParent;
- (id)redactedDescription;
- (void)_startWatchingNode;
- (id)description;
- (void)startWatching;
- (void)_updateWatchingNode;
- (id)initWithFileURL:(id)a0 delegate:(id)a1 queue:(id)a2;
- (void)_stopWatchingNode;
- (void).cxx_destruct;
- (id)initWithFileURL:(id)a0 name:(id)a1 delegate:(id)a2 queue:(id)a3;
- (void)_forceRefreshWatchingNode;
- (void)_startWatchingParent;
- (void)stopWatching;

@end
