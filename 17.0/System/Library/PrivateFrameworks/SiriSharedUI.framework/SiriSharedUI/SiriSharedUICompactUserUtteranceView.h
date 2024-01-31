@class SUICStreamingTextView, NSString, UIVisualEffectView, SRUIFSpeechRecognitionHypothesis;
@protocol SiriSharedUIUserUtteranceEditingDataManaging, SiriSharedUICompactUserUtteranceViewDelegate;

@interface SiriSharedUICompactUserUtteranceView : SiriSharedUIStandardView <SUICStreamingTextViewDelegate> {
    SRUIFSpeechRecognitionHypothesis *_speechRecognitionHypothesis;
    id<SiriSharedUIUserUtteranceEditingDataManaging> _userUtteranceEditingDataManager;
}

@property (retain, nonatomic, getter=_streamingTextView, setter=_setStreamingTextView:) SUICStreamingTextView *streamingTextView;
@property (retain, nonatomic, getter=_emojiMaskStreamingTextView, setter=_setEmojiMaskStreamingTextView:) SUICStreamingTextView *emojiMaskStreamingTextView;
@property (retain, nonatomic, getter=_editableStreamingTextView, setter=_setEditableStreamingTextView:) SUICStreamingTextView *editableStreamingTextView;
@property (nonatomic) BOOL isEditing;
@property (retain, nonatomic, getter=_backgroundView, setter=_setBackgroundView:) UIVisualEffectView *backgroundView;
@property (weak, nonatomic) id<SiriSharedUICompactUserUtteranceViewDelegate> delegate;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (nonatomic) BOOL isInAmbient;
@property (nonatomic) BOOL isInAmbientInteractivity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_handleTap:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setSpeechRecognitionHypothesis:(id)a0;
- (id)_createStreamingTextViewForEmojisOnly:(BOOL)a0;
- (id)_fontForStreamingTextView;
- (void)_setStreamingText:(id)a0;
- (void)_updateAmbientAppearance;
- (id)initWithContentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 cornerRadius:(double)a1;

@end
