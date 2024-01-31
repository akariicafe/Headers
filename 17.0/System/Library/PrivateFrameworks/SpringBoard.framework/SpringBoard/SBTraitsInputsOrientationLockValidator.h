@class TRAArbitrationDeviceOrientationInputs;

@interface SBTraitsInputsOrientationLockValidator : SBTraitsInputsValidator {
    long long _lockOrientation;
    BOOL _prefersDeferringOrientationUpdates;
    TRAArbitrationDeviceOrientationInputs *_lastForwardedOrientationInputs;
}

- (id)initWithValidatorOrder:(id)a0;
- (void)setPrefersDeferringOrientationUpdates:(BOOL)a0;
- (id)description;
- (void).cxx_destruct;
- (id)validateInputs:(id)a0 withContext:(id)a1;
- (void)setLockOrientation:(long long)a0;

@end
