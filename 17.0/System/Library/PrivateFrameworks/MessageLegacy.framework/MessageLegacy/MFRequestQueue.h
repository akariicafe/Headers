@class NSMutableArray, NSConditionLock;

@interface MFRequestQueue : NSObject {
    NSConditionLock *_condition;
    NSMutableArray *_requests;
    NSMutableArray *_consumers;
    unsigned int _waitingOutside;
    unsigned int _waitingInside;
}

- (id)init;
- (void)dealloc;
- (void)_processRequests:(id)a0 consumers:(id)a1;
- (void)addRequest:(id)a0 consumer:(id)a1;
- (void)addRequests:(id)a0 consumers:(id)a1;
- (void)processRequest:(id)a0 consumer:(id)a1;
- (void)processRequests:(id)a0 consumers:(id)a1;
- (void)willAddRequests:(id)a0 consumers:(id)a1;

@end
