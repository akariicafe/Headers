@class PRUISPosterSnapshotRequest;

@interface _PRUISPosterRenderingEnqueuedSnapshot : NSObject

@property (retain, nonatomic) PRUISPosterSnapshotRequest *snapshotRequest;
@property (copy, nonatomic) id /* block */ completionBlock;

- (void).cxx_destruct;
- (id)initWithSnapshotRequest:(id)a0 completionBlock:(id /* block */)a1;

@end
