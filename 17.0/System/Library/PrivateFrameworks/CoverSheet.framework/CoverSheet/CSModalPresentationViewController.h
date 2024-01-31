@protocol BSInvalidatable;

@interface CSModalPresentationViewController : CSPresentationViewController {
    id<BSInvalidatable> _stateCaptureBlock;
}

- (id)init;
- (void)dealloc;
- (void)_addStateCaptureHandlers;
- (void).cxx_destruct;

@end
