@class NSString, PKTextInputHandwritingShot, NSUUID, CHTextInputQueryItem, NSNumber;

@interface PKTextInputTargetState : NSObject <NSCopying, PKTextInputDebugStateReporting> {
    BOOL _nextCommitShouldHavePrecedingSeparator;
    NSNumber *_elementRecognitionIdentifier;
    CHTextInputQueryItem *_lastQueryItem;
    PKTextInputHandwritingShot *_handwritingShot;
    NSNumber *_writingSessionIdentifier;
    NSString *_uncommittedPendingText;
    NSString *_activePreviewText;
    long long _sessionCommitLength;
    long long _lastCommittedCharacterLevelPosition;
    NSUUID *_inProgressGestureStrokeUUID;
    double _inProgressGestureStartTimestamp;
    double _lastUpdateTimestamp;
    struct _NSRange { unsigned long long location; unsigned long long length; } _inProgressGestureInitialSelectedRange;
    struct _NSRange { unsigned long long location; unsigned long long length; } _inProgressGestureSelectionRange;
    struct _NSRange { unsigned long long location; unsigned long long length; } _inProgressGestureRangeToDelete;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)reportDebugStateDescription:(id /* block */)a0;

@end
