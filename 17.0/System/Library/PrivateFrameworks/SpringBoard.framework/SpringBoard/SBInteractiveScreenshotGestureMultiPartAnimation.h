@class NSMutableArray;

@interface SBInteractiveScreenshotGestureMultiPartAnimation : NSObject {
    id /* block */ _completionHandler;
    NSMutableArray *_pendingAnimationIdentifiers;
}

- (id)initWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)beginAnimationWithIdentifier:(id)a0;
- (void)completeAnimationWithIdentifier:(id)a0 finished:(BOOL)a1 retargeted:(BOOL)a2;

@end
