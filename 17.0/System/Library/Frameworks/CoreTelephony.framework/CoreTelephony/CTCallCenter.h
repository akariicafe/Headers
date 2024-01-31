@class CXCallObserver, NSSet, NSString;

@interface CTCallCenter : NSObject <CXCallObserverDelegate> {
    struct queue { struct object { struct dispatch_object_s *fObj; } fObj; } _queue;
    struct queue { struct object { struct dispatch_object_s *fObj; } fObj; } clientQueue;
    NSSet *_currentCalls;
    id /* block */ _callEventHandler;
}

@property (retain) CXCallObserver *callKitObserver;
@property (retain) NSSet *currentCalls;
@property (copy, nonatomic) id /* block */ callEventHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithQueue:(struct dispatch_queue_s { } *)a0;
- (id)init;
- (void)dealloc;
- (void)initialize;
- (id)currentCalls;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)callObserver:(id)a0 callChanged:(id)a1;
- (void)setCurrentCalls:(id)a0;
- (BOOL)calculateCallStateChanges_sync:(id)a0;
- (void)broadcastCallStateChangesIfNeededWithFailureLogMessage:(id)a0;
- (BOOL)getCurrentCallSetFromServer_sync:(id)a0;
- (void)handleCallStatusChange_sync:(id)a0;

@end
