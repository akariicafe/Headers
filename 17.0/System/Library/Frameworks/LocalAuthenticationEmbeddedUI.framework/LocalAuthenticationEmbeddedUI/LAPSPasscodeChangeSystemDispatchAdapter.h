@class NSString, NSObject;
@protocol OS_dispatch_queue, LAPSPasscodeChangeSystem;

@interface LAPSPasscodeChangeSystemDispatchAdapter : NSObject <LAPSPasscodeChangeSystem> {
    id<LAPSPasscodeChangeSystem> _system;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithSystem:(id)a0;
- (BOOL)hasPasscode;
- (void)_performOnBackgroundQueue:(id /* block */)a0;
- (void)_performOnMainQueue:(id /* block */)a0;
- (BOOL)canChangePasscodeWithError:(id *)a0;
- (void)changePasscode:(id)a0 to:(id)a1 completion:(id /* block */)a2;
- (id)initWithSystem:(id)a0 workQueue:(id)a1;
- (id)lastPasscodeChange;
- (id)newPasscodeRequest;
- (id)oldPasscodeRequest;
- (void)verifyNewPasscode:(id)a0 completion:(id /* block */)a1;
- (void)verifyPasscode:(id)a0 completion:(id /* block */)a1;

@end
