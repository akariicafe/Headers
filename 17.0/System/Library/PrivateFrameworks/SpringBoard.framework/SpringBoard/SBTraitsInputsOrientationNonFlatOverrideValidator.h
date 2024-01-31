@interface SBTraitsInputsOrientationNonFlatOverrideValidator : SBTraitsInputsValidator {
    long long _lastNonFlatOrientationOverride;
}

- (id)description;
- (id)validateInputs:(id)a0 withContext:(id)a1;
- (void)setLastNonFlatOrientationOverride:(long long)a0;

@end
