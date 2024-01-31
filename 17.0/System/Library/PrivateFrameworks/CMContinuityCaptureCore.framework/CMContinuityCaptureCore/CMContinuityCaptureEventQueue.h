@class NSSet, NSMutableSet, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, CMContinuityCaptureEventQueueActionDelegate;

@interface CMContinuityCaptureEventQueue : NSObject {
    id<CMContinuityCaptureEventQueueActionDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_eventQueue;
    NSSet *_expectedIdentifiers;
    NSMutableSet *_completedIdentifiers;
}

- (void).cxx_destruct;
- (void)_dropStreamStartEventsForEntityIfApplicable;
- (void)_notifyCompletion;
- (void)enqueueEventAction:(unsigned long long)a0 args:(id)a1;
- (id)initWithActionDelegate:(id)a0 queue:(id)a1;
- (void)notifyCompletion;
- (void)notifyCompletionForIdentfier:(id)a0;
- (void)setEventCompletionExpectationForIdentifiers:(id)a0;

@end
