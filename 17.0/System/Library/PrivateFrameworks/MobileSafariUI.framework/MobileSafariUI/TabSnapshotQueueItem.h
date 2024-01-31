@class TabSnapshotRequest;
@protocol TabSnapshotContentProvider;

@interface TabSnapshotQueueItem : NSObject

@property (readonly, nonatomic) TabSnapshotRequest *request;
@property (readonly, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) id<TabSnapshotContentProvider> contentProvider;
@property (nonatomic) BOOL snappshottingIsInProgress;

- (void).cxx_destruct;
- (void)appendCompletionHandler:(id /* block */)a0;
- (id)initWithRequest:(id)a0 contentProvider:(id)a1 completionHandler:(id /* block */)a2;

@end
