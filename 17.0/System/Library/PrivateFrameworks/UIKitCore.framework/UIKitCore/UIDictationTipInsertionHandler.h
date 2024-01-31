@class UIDelayedAction, NSMutableString, NSString;
@protocol UIDictationTipHandlerDelegate;

@interface UIDictationTipInsertionHandler : NSObject <UIDictationTipRecordingProtocol>

@property (retain, nonatomic) NSMutableString *insertionText;
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
- (id)initWithDelegate:(id)a0;
- (void)resetHandler;

@end
