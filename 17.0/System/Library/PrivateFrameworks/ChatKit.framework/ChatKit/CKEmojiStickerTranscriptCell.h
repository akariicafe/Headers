@class CKEmojiStickerLabel, IMEmojiSticker;

@interface CKEmojiStickerTranscriptCell : CKAssociatedStickerTranscriptCell

@property (readonly, nonatomic) CKEmojiStickerLabel *labelView;
@property (retain, nonatomic) IMEmojiSticker *emojiSticker;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)animateToVisible:(BOOL)a0 completion:(id /* block */)a1;
- (void)configureForChatItem:(id)a0 context:(id)a1;
- (void)performHide:(id /* block */)a0;
- (void)performReveal:(id /* block */)a0;
- (void)setSticker:(id)a0;

@end
