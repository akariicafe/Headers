@protocol TUIInputAccessoryViewTraits;

@interface TUIInputAccessoryBackdropView : UIVisualEffectView

@property (retain, nonatomic) id<TUIInputAccessoryViewTraits> inputAccessoryViewTraits;

- (void)_setRenderConfig:(id)a0;
- (void).cxx_destruct;
- (void)updateVisualStyle;

@end
