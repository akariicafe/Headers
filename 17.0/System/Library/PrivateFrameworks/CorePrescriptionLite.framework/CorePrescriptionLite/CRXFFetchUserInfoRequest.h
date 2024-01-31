@class CRXUDispatchQueue, CRXUTimer;

@interface CRXFFetchUserInfoRequest : NSObject {
    CRXUDispatchQueue *_completionQueue;
    CRXUTimer *_timer;
    id /* block */ _completion;
    BOOL _finished;
}

- (void)timerDidFire:(id)a0;
- (void).cxx_destruct;
- (void)finishWithUserInfo:(id)a0 error:(id)a1;
- (id)initWithTimeout:(double)a0 completionQueue:(id)a1 completion:(id /* block */)a2;

@end
