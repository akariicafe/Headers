@class NSString, NUMediaView, PXUIPortraitFocusView;
@protocol PUPhotoEditToolControllerDelegate, PUPhotoEditPortraitFocusDelegate;

@interface PUPhotoEditPortraitFocusOverlayViewController : UIViewController <PXPortraitFocusViewDelegate> {
    NUMediaView *_mediaView;
    PXUIPortraitFocusView *_portraitFocusView;
}

@property (weak, nonatomic) id<PUPhotoEditToolControllerDelegate> delegate;
@property (weak, nonatomic) id<PUPhotoEditPortraitFocusDelegate> portraitFocusDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })currentFocusRect;
- (void)focusPointChanged:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithMediaView:(id)a0 delegate:(id)a1;
- (void)mediaViewIsReady;

@end
