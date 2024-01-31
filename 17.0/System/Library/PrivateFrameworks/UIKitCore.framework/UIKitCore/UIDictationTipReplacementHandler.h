@class NSString, NSMutableString, UIDelayedAction;
@protocol UIDictationTipHandlerDelegate;

@interface UIDictationTipReplacementHandler : NSObject <UIDictationTipRecordingProtocol>

@property (retain, nonatomic) NSString *replacementTargetText;
@property (retain, nonatomic) NSMutableString *replacementText;
@property (retain, nonatomic) UIDelayedAction *finalizeAction;
@property (nonatomic) long long textRecorderStatus;
@property (weak, nonatomic) id<UIDictationTipHandlerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startRecodingText:(id)a0;
- (void)finalizeRecordedText;
- (void)recordDictationTipText:(id)a0;
- (void).cxx_destruct;
- (void)startRecodingReplacementText:(id)a0;
- (id)initWithDelegate:(id)a0;
- (void)resetHandler;
- (void)recordDictationTipReplacementText:(id)a0;

@end
