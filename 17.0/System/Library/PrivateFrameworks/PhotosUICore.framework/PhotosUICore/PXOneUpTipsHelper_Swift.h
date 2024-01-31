@class NSString;

@interface PXOneUpTipsHelper_Swift : PXTipsHelper_Swift {
    void /* unknown type, empty encoding */ oneUpLivePhotosTip;
    void /* unknown type, empty encoding */ oneUpInfoPanelTip;
    void /* unknown type, empty encoding */ oneUpSyndicatedPhotosTip;
    void /* unknown type, empty encoding */ oneUpActionsMenuTip;
    void /* unknown type, empty encoding */ oneUpQuickCropTip;
    void /* unknown type, empty encoding */ hasStartedTips;
}

@property (class, nonatomic, readonly) PXOneUpTipsHelper_Swift *shared;
@property (class, nonatomic, readonly) NSString *livePhotosTipID;
@property (class, nonatomic, readonly) NSString *infoPanelTipID;
@property (class, nonatomic, readonly) NSString *syndicatedPhotosTipID;
@property (class, nonatomic, readonly) NSString *actionsMenuTipID;
@property (class, nonatomic, readonly) NSString *quickCropTipID;

+ (void)signalSyndicatedPhotosPresented;
+ (void)setTip:(id)a0 isPresentable:(BOOL)a1;
+ (void)setTipActionPerformed:(id)a0;
+ (void)setTipsPresentationDelegate:(id)a0;
+ (void)signalDidQuickCrop;
+ (void)signalOneUpPhotoOpened;

- (id)init;
- (void).cxx_destruct;

@end
