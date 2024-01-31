@class NSString, BSAbsoluteMachTimer;
@protocol SBHomeButtonSuppressAfterUnlockRecognizerDelegate;

@interface CSHomeButtonSuppressAfterUnlockRecognizer : NSObject <SBHomeButtonSuppressAfterUnlockRecognizer> {
    BSAbsoluteMachTimer *_timer;
    BOOL _done;
}

@property (weak, nonatomic) id<SBHomeButtonSuppressAfterUnlockRecognizerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_invalidateTimer;
- (void)_timerFired;
- (id)init;
- (void)handleBiometricEvent:(unsigned long long)a0;
- (void)dealloc;
- (void)_requestEndOfSuppression;
- (void).cxx_destruct;
- (void)_startTimer;

@end
