@class VSRecognitionAction;

@interface VSRecognitionConfirmAction : VSRecognitionRecognizeAction {
    VSRecognitionAction *_confirmedAction;
    VSRecognitionAction *_deniedAction;
    struct { unsigned char initializing : 1; unsigned char confirmed : 1; } _confirmFlags;
}

- (id)init;
- (void)dealloc;
- (id)initWithModelIdentifier:(id)a0;
- (int)completionType;
- (id)confirmedAction;
- (void)_setConfirmed:(BOOL)a0;
- (id)deniedAction;
- (void)setConfirmedAction:(id)a0;
- (void)setDeniedAction:(id)a0;

@end
