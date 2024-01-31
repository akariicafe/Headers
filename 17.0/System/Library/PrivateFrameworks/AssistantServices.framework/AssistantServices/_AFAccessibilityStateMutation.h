@class NSString, AFAccessibilityState;

@interface _AFAccessibilityStateMutation : NSObject <AFAccessibilityStateMutating> {
    AFAccessibilityState *_base;
    long long _isVoiceOverTouchEnabled;
    long long _isVibrationDisabled;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasIsVoiceOverTouchEnabled : 1; unsigned char hasIsVibrationDisabled : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBase:(id)a0;
- (BOOL)isDirty;
- (void).cxx_destruct;
- (long long)getIsVibrationDisabled;
- (long long)getIsVoiceOverTouchEnabled;
- (void)setIsVibrationDisabled:(long long)a0;
- (void)setIsVoiceOverTouchEnabled:(long long)a0;

@end
