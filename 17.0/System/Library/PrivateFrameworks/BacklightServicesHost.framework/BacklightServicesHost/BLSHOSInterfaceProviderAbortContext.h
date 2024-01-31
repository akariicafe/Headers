@class NSString;

@interface BLSHOSInterfaceProviderAbortContext : NSObject <BLSHWatchdogAbortContext> {
    unsigned long long _watchdogType;
    long long _cbDisplayMode;
    long long _cbFlipbookState;
    BOOL _suppressionServiceActive;
    BOOL _caFlipbookEnabled;
    BOOL _caFlipbookSuppressed;
    BOOL _caBlanked;
    BOOL _flipbookTransparent;
    BOOL _deviceSupportsAlwaysOn;
    BOOL _kernelSpecialMode;
    BOOL _displayStateClientSupported;
    float _backlightDimmedFactor;
}

@property (readonly, nonatomic) unsigned long long abortReason;
@property (readonly, copy, nonatomic) NSString *abortReasonString;
@property (readonly, nonatomic) const void *payload;
@property (readonly, nonatomic) unsigned int payloadSize;
@property (readonly, nonatomic) BOOL hasEnsureFlipbookCurrent;
@property (readonly, nonatomic) BOOL wantsPanic;
@property (readonly, nonatomic) BOOL wantsWaitPastFireForCompletionAndTailspin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithWatchdogType:(unsigned long long)a0 cbDisplayMode:(long long)a1 cbFlipbookState:(long long)a2 suppressionServiceActive:(BOOL)a3 caFlipbookEnabled:(BOOL)a4 caFlipbookSuppressed:(BOOL)a5 caBlanked:(BOOL)a6 flipbookTransparent:(BOOL)a7 deviceSupportsAlwaysOn:(BOOL)a8 kernelSpecialMode:(BOOL)a9 displayStateClientSupported:(BOOL)a10 backlightDimmedFactor:(float)a11;
- (void)setSleepImminentAbortReason;

@end
