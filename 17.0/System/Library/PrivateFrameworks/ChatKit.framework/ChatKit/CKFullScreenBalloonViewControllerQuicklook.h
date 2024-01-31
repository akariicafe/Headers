@interface CKFullScreenBalloonViewControllerQuicklook : CKFullScreenBalloonViewControllerPhone

- (BOOL)hideBalloonView;
- (BOOL)constrainToPresentingVCBounds;
- (BOOL)forceWindowedPresentation;
- (BOOL)preserveModalPresentationStyle;
- (BOOL)wantsWindowedPresentation;

@end
