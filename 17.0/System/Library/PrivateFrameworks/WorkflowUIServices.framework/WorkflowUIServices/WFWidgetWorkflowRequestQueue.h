@class NSMutableArray, NSObject;
@protocol OS_os_log;

@interface WFWidgetWorkflowRequestQueue : NSObject

@property (nonatomic, getter=isHandlingRequest) BOOL handlingRequest;
@property (readonly, nonatomic) NSMutableArray *requests;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (readonly, nonatomic) NSObject<OS_os_log> *log;

- (id)init;
- (void).cxx_destruct;
- (void)_requeueFailedRequest:(id)a0;
- (void)fetchNextQueuedItem;
- (void)getWidgetWorkflowWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)getWidgetWorkflowsInCollectionWithIdentifier:(id)a0 limit:(unsigned long long)a1 completionHandler:(id /* block */)a2;

@end
