@interface ICSystemPaperPresenter : NSObject

+ (void)initialize;
+ (id)makeExtensionHostViewControllerWithUserActivityData:(id)a0 completion:(id /* block */)a1;
+ (BOOL)isSystemPaperAvailable;
+ (void)presentSystemPaperWithUserActivityData:(id)a0 presentingViewController:(id)a1 completion:(id /* block */)a2;

- (id)init;

@end
