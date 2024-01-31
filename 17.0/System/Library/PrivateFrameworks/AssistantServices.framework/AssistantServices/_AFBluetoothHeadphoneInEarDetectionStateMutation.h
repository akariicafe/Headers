@class NSString, AFBluetoothHeadphoneInEarDetectionState;

@interface _AFBluetoothHeadphoneInEarDetectionStateMutation : NSObject <AFBluetoothHeadphoneInEarDetectionStateMutating> {
    AFBluetoothHeadphoneInEarDetectionState *_base;
    BOOL _isEnabled;
    long long _primaryEarbudSide;
    long long _primaryInEarStatus;
    long long _secondaryInEarStatus;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasIsEnabled : 1; unsigned char hasPrimaryEarbudSide : 1; unsigned char hasPrimaryInEarStatus : 1; unsigned char hasSecondaryInEarStatus : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBase:(id)a0;
- (void)setIsEnabled:(BOOL)a0;
- (BOOL)isDirty;
- (void)setPrimaryInEarStatus:(long long)a0;
- (void)setSecondaryInEarStatus:(long long)a0;
- (void).cxx_destruct;
- (BOOL)getIsEnabled;
- (long long)getPrimaryEarbudSide;
- (long long)getPrimaryInEarStatus;
- (long long)getSecondaryInEarStatus;
- (void)setPrimaryEarbudSide:(long long)a0;

@end
