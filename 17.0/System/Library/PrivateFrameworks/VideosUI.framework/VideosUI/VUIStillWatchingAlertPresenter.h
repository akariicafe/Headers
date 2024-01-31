@interface VUIStillWatchingAlertPresenter : NSObject

@property (nonatomic) double timeoutInterval;

+ (void)presentWithTitle:(id)a0 presentingController:(id)a1 timeout:(double)a2 responseHandler:(id /* block */)a3;

@end
