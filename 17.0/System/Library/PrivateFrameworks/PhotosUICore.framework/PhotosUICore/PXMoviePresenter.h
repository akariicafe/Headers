@class UIViewController;

@interface PXMoviePresenter : NSObject

@property (readonly, weak, nonatomic) UIViewController *presentingViewController;

+ (id)moviePresenterWithPresentingViewController:(id)a0;

- (id)init;
- (id)initWithPresentingViewController:(id)a0;
- (void).cxx_destruct;
- (BOOL)presentMovieViewControllerForAssetCollection:(id)a0 keyAsset:(id)a1 preferredTransitionType:(long long)a2;
- (BOOL)presentMovieViewControllerForAssetCollection:(id)a0 keyAsset:(id)a1 referencePersons:(id)a2 preferredTransitionType:(long long)a3;

@end
