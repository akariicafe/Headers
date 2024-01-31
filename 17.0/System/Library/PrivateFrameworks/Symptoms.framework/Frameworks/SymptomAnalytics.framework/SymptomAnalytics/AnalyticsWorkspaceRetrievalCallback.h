@class NSObject;
@protocol OS_dispatch_queue;

@interface AnalyticsWorkspaceRetrievalCallback : NSObject

@property (copy) id /* block */ workspaceCallback;
@property (retain) NSObject<OS_dispatch_queue> *callbackQueue;

- (void).cxx_destruct;

@end
