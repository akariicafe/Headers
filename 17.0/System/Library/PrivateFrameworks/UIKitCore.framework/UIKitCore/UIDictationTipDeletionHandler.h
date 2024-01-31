@class UIDelayedAction, NSMutableString, NSString;
@protocol UIDictationTipHandlerDelegate;

@interface UIDictationTipDeletionHandler : NSObject <UIDictationTipRecordingProtocol>

@property (retain, nonatomic) NSMutableString *deletionText;
@property (retain, nonatomic) UIDelayedAction *finalizeAction;
@property (nonatomic) long long textRecorderStatus;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } lastSelectedDeletionRange;
@property (nonatomic) long long deletionEventCount;
@property (retain, nonatomic) NSMutableString *cachedDeletedText;
@property (weak, nonatomic) id<UIDictationTipHandlerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startRecodingText:(id)a0;
- (long long)currentDeletionEventCount;
- (void)resetDeletionEventCount;
- (void)finalizeRecordedText;
- (void)startRecodingDeletionText:(id)a0;
- (void)recordDictationTipDeletionText:(id)a0;
- (void)recordDictationTipText:(id)a0;
- (void)addDeletionEventCount:(id)a0 deletedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setlastDeletionRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void).cxx_destruct;
- (void)resetRecorder;
- (id)initWithDelegate:(id)a0;
- (void)resetHandler;

@end
