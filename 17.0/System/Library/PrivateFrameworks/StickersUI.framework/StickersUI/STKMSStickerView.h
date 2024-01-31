@class UILongPressGestureRecognizer;
@protocol STKMSStickerViewDelegate;

@interface STKMSStickerView : MSStickerView {
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
}

@property (weak, nonatomic) id<STKMSStickerViewDelegate> delegate;

- (id)init;
- (id)dragInteraction:(id)a0 itemsForBeginningSession:(id)a1;
- (void)_prepareForReuse;
- (void)handleLongPress:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)handleTap:(id)a0;
- (void)startAnimatingWithOffset:(double)a0;

@end
