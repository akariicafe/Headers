@class GEOMuninViewState, MKMapItem, GEOCameraFrame;

@interface MKLookAroundScene : NSObject <NSCopying>

@property (readonly, nonatomic, getter=_type) unsigned long long type;
@property (readonly, nonatomic, getter=_cameraFrameOverride) GEOCameraFrame *cameraFrameOverride;
@property (readonly, nonatomic, getter=_mapItem) MKMapItem *mapItem;
@property (readonly, nonatomic, getter=_muninViewState) GEOMuninViewState *muninViewState;
@property (nonatomic, getter=_wantsCloseUpView, setter=_setWantsCloseUpView:) BOOL wantsCloseUpView;

- (id)initWithMapItem:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMapItem:(id)a0 cameraFrameOverride:(id)a1;
- (id)initWithMuninViewState:(id)a0;

@end
