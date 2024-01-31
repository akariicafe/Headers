@class NSString, SFAppAutoFillOneTimeCodeProvider, _SFAuthenticationContext;

@interface _SFFormDataController : WBUFormDataController <_SFAuthenticationContextDelegate> {
    SFAppAutoFillOneTimeCodeProvider *_oneTimeCodeProvider;
}

@property (readonly, nonatomic) _SFAuthenticationContext *autoFillAuthenticationContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedController;

- (id)oneTimeCodeProvider;
- (void).cxx_destruct;
- (BOOL)contextRequiresSessionBasedAuthentication:(id)a0;
- (BOOL)contextShouldAllowMultipleBiometricFailures:(id)a0;
- (BOOL)contextShouldAllowPasscodeFallback:(id)a0;
- (id)initWithAggressiveKeychainCaching:(BOOL)a0;
- (double)invalidationTimeoutIfApplicationEntersBackgroundDuringAuthenticationForContext:(id)a0;

@end
