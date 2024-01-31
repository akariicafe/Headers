@class NSString, SBFMobileKeyBag;
@protocol SBFUserAuthenticationModelDelegate;

@interface SBFUserAuthenticationModelEducationalMode : NSObject <SBFUserAuthenticationModel> {
    SBFMobileKeyBag *_keybag;
    BOOL _pendingWipe;
}

@property (nonatomic) id<SBFUserAuthenticationModelDelegate> delegate;
@property (readonly, nonatomic, getter=isTemporarilyBlocked) BOOL temporarilyBlocked;
@property (readonly, nonatomic, getter=isPermanentlyBlocked) BOOL permanentlyBlocked;
@property (readonly, nonatomic, getter=isUserRequestedEraseEnabled) BOOL userRequestedEraseEnabled;
@property (readonly, nonatomic) double timeUntilUnblockedSinceReferenceDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_refreshStateAndNotify:(BOOL)a0;
- (void)notePasscodeEntryBegan;
- (void)notePasscodeUnlockFailedWithError:(id)a0;
- (void)performPasswordTest:(id /* block */)a0;
- (void)noteNewMkbDeviceLockState:(id)a0;
- (void).cxx_destruct;
- (void)notePasscodeEntryCancelled;
- (id)initWithKeyBag:(id)a0;
- (void)synchronize;
- (void)_refreshStateForMkbState:(id)a0 notify:(BOOL)a1;
- (void)notePasscodeUnlockSucceeded;

@end
