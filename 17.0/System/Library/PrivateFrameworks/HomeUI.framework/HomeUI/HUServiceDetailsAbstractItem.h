@class HMHome, HFItem;
@protocol HFServiceLikeItem;

@interface HUServiceDetailsAbstractItem : HFItem

@property (retain, nonatomic) HFItem<HFServiceLikeItem> *sourceServiceItem;
@property (retain, nonatomic) HMHome *home;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isBridge;
- (BOOL)isCamera;
- (BOOL)isBridged;
- (BOOL)isCHIPAccessory;
- (BOOL)isNetworkRouter;
- (BOOL)isSensorService;
- (id)sourceAccessory;
- (id)initWithSourceServiceItem:(id)a0 home:(id)a1;
- (id)_subclass_updateWithOptions:(id)a0;
- (BOOL)canShowAsIndividualTiles;
- (BOOL)isAccessory;
- (BOOL)isAccessoryDisplayedAsIndividualTiles;
- (BOOL)isAudioAnalysisSupportedDevice;
- (BOOL)isContainedInAParent;
- (BOOL)isContainedWithinItemGroup;
- (BOOL)isItemGroup;
- (BOOL)isMediaAccessory;
- (BOOL)isMediaAccessoryGroup;
- (BOOL)isMultiServiceAccessory;
- (BOOL)isNetworkRouterSatellite;
- (BOOL)isNotificationSupportedCamera;
- (BOOL)isService;
- (BOOL)isVisibleAsBridge;

@end
