@class NSString, NSProgress, PUAssetPickerActivityProgressViewController, UIAlertController;

@interface PUAssetPickerActivityProgressController : NSObject {
    PUAssetPickerActivityProgressViewController *_progressViewController;
    UIAlertController *_alertController;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) id /* block */ cancellationHandler;
@property (retain, nonatomic) NSProgress *progress;

- (id)init;
- (void).cxx_destruct;
- (void)_setupAlertController;
- (void)hideWithCompletion:(id /* block */)a0;
- (void)showFromSourceViewController:(id)a0 completion:(id /* block */)a1;

@end
