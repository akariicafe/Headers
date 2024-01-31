@class NUComposition;
@protocol PXEditLivePhotoModel;

@interface PXEditLivePhotoToggleAction : PXEditCompositionAction {
    id<PXEditLivePhotoModel> _livePhotoModel;
    NUComposition *_sourceComposition;
    NUComposition *_targetComposition;
}

- (void)performAction:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)_isLoopingVideo;
- (id)initWithCompositionController:(id)a0 livePhotoModel:(id)a1;
- (void)performRedo:(id /* block */)a0;
- (void)performUndo:(id /* block */)a0;
- (id)sourceComposition;
- (id)targetComposition;

@end
