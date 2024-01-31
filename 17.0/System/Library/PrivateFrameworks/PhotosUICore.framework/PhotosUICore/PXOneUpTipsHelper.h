@class NSString;

@interface PXOneUpTipsHelper : PXTipsHelper

@property (class, readonly, nonatomic) NSString *livePhotosTipID;
@property (class, readonly, nonatomic) NSString *infoPanelTipID;
@property (class, readonly, nonatomic) NSString *syndicatedPhotosTipID;
@property (class, readonly, nonatomic) NSString *actionsMenuTipID;
@property (class, readonly, nonatomic) NSString *quickCropTipID;

+ (void)signalSyndicatedPhotosPresented;
+ (void)setTip:(id)a0 isPresentable:(BOOL)a1;
+ (void)setTipActionPerformed:(id)a0;
+ (void)setTipsPresentationDelegate:(id)a0;
+ (void)signalDidQuickCrop;
+ (void)signalOneUpPhotoOpened;

@end
