@class NSString, NSDictionary, NSUUID, NSError, NSMutableArray;

@interface _PBFGalleryEnqueuedPushToProactiveRequest : NSObject {
    NSMutableArray *_completionHandlers;
    NSError *_finalizedError;
    BOOL _finalizedResult;
}

@property (readonly, copy, nonatomic) NSDictionary *updatedDescriptors;
@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly, copy, nonatomic) NSUUID *sessionId;
@property (readonly, nonatomic, getter=isFinalized) BOOL finalized;

- (void)addCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)addCompletionHandlersFromEnqueuedPushToProactive:(id)a0;
- (void)fireCompletionHandlersWithError:(id)a0 didUpdate:(BOOL)a1;
- (id)initWithUpdatedDescriptors:(id)a0 reason:(id)a1 sessionId:(id)a2;

@end
