@class PKVerificationChannel, NSString, PKPaymentPass, NSObject, IMOneTimeCodeAccelerator;
@protocol OS_dispatch_queue, PKPaymentVerificationObserverDelegate, OS_dispatch_source;

@interface PKPaymentVerificationObserver : NSObject {
    BOOL _observing;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_source> *_timer;
    IMOneTimeCodeAccelerator *_oneTimeCodeObserver;
}

@property (readonly, retain, nonatomic) NSString *identifier;
@property (readonly, retain, nonatomic) PKPaymentPass *pass;
@property (readonly, retain, nonatomic) PKVerificationChannel *verificationChannel;
@property (weak, nonatomic) id<PKPaymentVerificationObserverDelegate> delegate;
@property (nonatomic) BOOL skipSourceCheck;

- (void)_startObserving;
- (void)dealloc;
- (void)stop;
- (void)_queue_stop;
- (void).cxx_destruct;
- (BOOL)_handleVerificationCode:(id)a0 fromSource:(id)a1;
- (void)_startObservingUsingLegacyObserver;
- (id)initWithPaymentPass:(id)a0 verificationChannel:(id)a1 identifier:(id)a2;
- (void)startObservingVerificationSourceWithTimeout:(double)a0;

@end
