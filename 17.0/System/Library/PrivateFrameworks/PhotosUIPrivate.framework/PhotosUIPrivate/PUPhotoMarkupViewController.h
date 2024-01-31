@class PUMediaProvider, NSString, NSURL, NSUndoManager, UIViewController, PUObserverRegistry, UIBarButtonItem, PUReviewAsset;
@protocol MarkupViewControllerPrivateProtocol;

@interface PUPhotoMarkupViewController : UIViewController <MarkupViewControllerDelegate> {
    NSUndoManager *_undoManager;
}

@property (readonly, nonatomic) UIViewController<MarkupViewControllerPrivateProtocol> *_markupViewController;
@property (readonly, nonatomic) PUObserverRegistry *_observerRegistry;
@property (nonatomic, setter=_setSourceImageVersion:) long long _sourceImageVersion;
@property (copy, nonatomic, setter=_setWorkaroundInputWriteURL:) NSURL *_workaroundInputWriteURL;
@property (retain, nonatomic) UIBarButtonItem *undoButton;
@property (retain, nonatomic) UIBarButtonItem *redoButton;
@property (nonatomic) BOOL updatingUndoButtons;
@property (readonly, nonatomic) PUReviewAsset *reviewAsset;
@property (readonly, nonatomic) PUMediaProvider *mediaProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)registerObserver:(id)a0;
- (void)unregisterObserver:(id)a0;
- (void)viewDidLoad;
- (void)_handleDoneButton:(id)a0;
- (void).cxx_destruct;
- (void)_undoManagerCheckpoint:(id)a0;
- (void)_handleCancelButton:(id)a0;
- (id)controller:(id)a0 willSetToolbarItems:(id)a1;
- (void)_handleRedoButton:(id)a0;
- (void)_handleUndoButton:(id)a0;
- (void)_notifyObserversDidFinishWithSavedAsset:(id)a0;
- (void)_updateUndoRedoButtons;
- (id)initWithReviewAsset:(id)a0 mediaProvider:(id)a1;

@end
