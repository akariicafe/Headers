@interface CSComplicationPresentationState : NSObject {
    BOOL _presenterVisible;
    BOOL _screenOff;
    BOOL _shouldPresentLandscapeComplications;
    long long _backlightLuminance;
    long long _interfaceOrientation;
    unsigned long long _suggestedComplicationPresentationMode;
}

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)_hydrateSuggestedPresentationMode;

@end
