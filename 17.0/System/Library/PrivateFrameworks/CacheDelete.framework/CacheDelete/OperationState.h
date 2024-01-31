@class NSObject;
@protocol OS_dispatch_queue;

@interface OperationState : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property BOOL operationCancelled;
@property int operationRefcount;

- (BOOL)begin;
- (id)init;
- (void)end;
- (BOOL)cancelled;
- (void).cxx_destruct;
- (void)cancel;

@end
