@class CMContinuityCaptureStateMachineEvent, CMContinuityCaptureState;

@interface CMContinuityCaptureStateTransition : NSObject

@property (retain, nonatomic) CMContinuityCaptureState *srcState;
@property (retain, nonatomic) CMContinuityCaptureState *dstState;
@property (retain, nonatomic) CMContinuityCaptureStateMachineEvent *event;
@property (copy, nonatomic) id /* block */ guard;
@property (copy, nonatomic) id /* block */ action;

- (void).cxx_destruct;
- (id)initWithAttributes:(id)a0 dstState:(id)a1 event:(id)a2 guard:(id /* block */)a3 action:(id /* block */)a4;
- (id)transactionFromStateOnEvent:(id)a0 event:(id)a1;

@end
