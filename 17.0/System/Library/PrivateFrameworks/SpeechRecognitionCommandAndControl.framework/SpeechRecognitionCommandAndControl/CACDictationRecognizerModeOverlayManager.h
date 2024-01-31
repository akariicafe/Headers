@protocol CACDictationRecognizerModeOverlayManagerDelegate;

@interface CACDictationRecognizerModeOverlayManager : CACSimpleContentViewManager

@property (weak, nonatomic) id<CACDictationRecognizerModeOverlayManagerDelegate> delegate;

- (BOOL)isOverlay;
- (void).cxx_destruct;
- (void)showOverlayForDictiationRecognizerMode;

@end
