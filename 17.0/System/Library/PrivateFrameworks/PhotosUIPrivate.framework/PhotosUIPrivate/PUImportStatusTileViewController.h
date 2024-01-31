@class PUAssetViewModel, NSString, UIActivityIndicatorView, UIView;

@interface PUImportStatusTileViewController : PUTileViewController <PUAssetViewModelChangeObserver> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    UIView *_successView;
    UIView *_errorView;
    UIActivityIndicatorView *_progressIndicatorView;
}

@property (nonatomic) BOOL _isPerformingChanges;
@property (retain, nonatomic) PUAssetViewModel *assetViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performChanges:(id /* block */)a0;
- (void)viewModel:(id)a0 didChange:(id)a1;
- (void)applyLayoutInfo:(id)a0;
- (void)viewDidLoad;
- (void)becomeReusable;
- (void)_updateIfNeeded;
- (void).cxx_destruct;
- (void)_updateStatusView;

@end
