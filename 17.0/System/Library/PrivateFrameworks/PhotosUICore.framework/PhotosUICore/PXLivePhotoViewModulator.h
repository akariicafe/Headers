@class PXImageLayerModulator, ISLivePhotoUIView, NSString;

@interface PXLivePhotoViewModulator : NSObject <PXMutableLivePhotoViewModulator, ISBasePlayerUIViewChangeObserver> {
    BOOL _isPerformingChanges;
    BOOL _isPerformingUpdates;
    struct { BOOL input; BOOL gainMapImage; } _needsUpdateFlags;
}

@property (nonatomic) BOOL animateGainMapAppearance;
@property (nonatomic) BOOL displayingVideoComplement;
@property (readonly, nonatomic) PXImageLayerModulator *imageModulator;
@property (readonly, nonatomic) PXImageLayerModulator *videoModulator;
@property (readonly, nonatomic) ISLivePhotoUIView *livePhotoView;
@property (readonly, nonatomic) struct CGImage { } *gainMapImage;
@property (readonly, nonatomic) float gainMapValue;
@property (readonly, nonatomic) BOOL revealsGainMapImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performChanges:(id /* block */)a0;
- (void)setGainMapImage:(struct CGImage { } *)a0;
- (void)setGainMapValue:(float)a0;
- (id)init;
- (void)dealloc;
- (BOOL)_needsUpdate;
- (void)prepareForReuse;
- (void)_setNeedsUpdate;
- (void)_updateIfNeeded;
- (void)setRevealsGainMapImage:(BOOL)a0;
- (void).cxx_destruct;
- (void)setLivePhotoView:(id)a0;
- (void)_invalidateGainMapImage;
- (void)_invalidateInput;
- (void)_updateGainMapImage;
- (void)_updateInput;
- (void)basePlayerUIView:(id)a0 didChange:(unsigned long long)a1 withAnimationDuration:(double)a2;
- (id)initWithImageModulator:(id)a0 videoModulator:(id)a1;
- (void)performChanges_Private:(id /* block */)a0;
- (void)setGainMapImage:(struct CGImage { } *)a0 animated:(BOOL)a1;

@end
