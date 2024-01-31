@class NSObject, TUCall;
@protocol OS_dispatch_queue, SATelephonyDelegateProtocol;

@interface SATelephonyManager : NSObject

@property (nonatomic) BOOL callInProgress;
@property (nonatomic) BOOL callFailed;
@property (retain, nonatomic) TUCall *call;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callQueue;
@property (weak, nonatomic) id<SATelephonyDelegateProtocol> delegate;

- (id)initWithQueue:(id)a0;
- (void)placeVoiceCall:(id)a0 completionHandler:(id /* block */)a1;
- (void)_currentCallEndedWithUpdatedFailureStatus:(BOOL)a0;
- (void)_currentCallEnded;
- (void)handleCallChanged:(id)a0 force:(BOOL)a1;
- (void)_callStatusChanged:(id)a0;
- (void).cxx_destruct;
- (void)_canPlaceNewCall:(id /* block */)a0;

@end
