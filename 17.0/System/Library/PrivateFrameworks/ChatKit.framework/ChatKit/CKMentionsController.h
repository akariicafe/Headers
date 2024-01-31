@class NSMutableDictionary, CKMessageEntryRichTextView, NSTimer, CKMentionsTextContainerOverlayView, NSAttributedString;
@protocol CKMentionsControllerDelegate;

@interface CKMentionsController : NSObject

@property (copy, nonatomic) NSAttributedString *mentionAttributes;
@property (retain, nonatomic) CKMessageEntryRichTextView *textView;
@property (retain, nonatomic) NSMutableDictionary *animationsByIdentifier;
@property (retain, nonatomic) NSTimer *mentionTimer;
@property (readonly, nonatomic, getter=isAnyMentionAnimationActive) BOOL anyMentionAnimationActive;
@property (retain, nonatomic) CKMentionsTextContainerOverlayView *overlayView;
@property (weak, nonatomic) id<CKMentionsControllerDelegate> delegate;

- (void).cxx_destruct;
- (void)_delegateDidFinishMentionAnimationWithIdentifier:(id)a0;
- (void)_startAnimationIfNeeded;
- (void)didSetAttributedTextOfTextView;
- (id)initWithEntryTextView:(id)a0;
- (void)stopTimerRemovingAttribute:(BOOL)a0;
- (void)updateDisplayForMentionGlyphRangeRemovingAttribute:(BOOL)a0;
- (void)updateMentionAttributes:(id)a0;
- (void)updateMentionDisplay;

@end
