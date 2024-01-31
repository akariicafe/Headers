@class UIViewController, AAUIServerHookHandlerDelegate;

@interface AAUIServerUIHookHandler : RUIServerHookHandler {
    AAUIServerHookHandlerDelegate *_delegate;
}

@property (retain, nonatomic) UIViewController *presentingControllerOverride;

- (id)init;
- (void).cxx_destruct;

@end
