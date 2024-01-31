@class CATSharingDevice, NSString;
@protocol CATSharingDeviceSession;

@interface CATDeviceSessionBackedDevicePairingTerminal : NSObject <CATSharingDevicePairingTerminal> {
    id<CATSharingDeviceSession> mDeviceSession;
    id /* block */ mVerifyPairingCompletion;
    id /* block */ mBeginPairingCompletion;
    id /* block */ mPINPromptHandler;
}

@property (nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly, nonatomic) CATSharingDevice *device;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidateWithError:(id)a0;
- (void)_tryPIN:(id)a0;
- (void)tryPIN:(id)a0;
- (void)_invalidate;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_beginPairing:(id /* block */)a0 withCompletion:(id /* block */)a1;
- (void)_verifyPairingAndFetchStableIdentifierWithCompletion:(id /* block */)a0;
- (void)addSessionHandlers;
- (void)beginPairing:(id /* block */)a0 withCompletion:(id /* block */)a1;
- (void)deviceSessionEncounteredError:(id)a0;
- (void)deviceSessionInvalidated:(id)a0;
- (void)deviceSessionReady;
- (void)fetchStableIdentifier;
- (void)fetchStableIdentifierFinished:(id)a0;
- (id)initWithDeviceSession:(id)a0;
- (void)pairingCompleteWithError:(id)a0;
- (void)removeSessionHandlers;
- (void)sessionHasPromptedForPINWithWaitTime:(unsigned long long)a0;
- (void)vendConnectionForCompletion:(id /* block */)a0;
- (void)verifyPairing;
- (void)verifyPairingAndFetchStableIdentifierWithCompletion:(id /* block */)a0;
- (void)verifyPairingFinished:(BOOL)a0;

@end
