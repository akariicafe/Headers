@class NSString, NSAttributedString, PXAssetCollectionReference;

@interface PXPhotosGridFloatingHeaderSnapshot : NSObject <PXPhotosGridFloatingHeaderInfo>

@property (readonly, nonatomic) NSAttributedString *title;
@property (readonly, nonatomic) NSAttributedString *subtitle;
@property (readonly, nonatomic) PXAssetCollectionReference *assetCollectionReference;
@property (readonly, nonatomic) NSString *buttonTitle;
@property (readonly, nonatomic) unsigned long long buttonActionType;
@property (readonly, nonatomic) NSAttributedString *floatingSummaryTitle;
@property (readonly, nonatomic) NSAttributedString *floatingSummarySubtitle;
@property (readonly, nonatomic) BOOL floatingEnableOverview;
@property (readonly, nonatomic) NSString *floatingButtonTitle;
@property (readonly, nonatomic) unsigned long long floatingButtonActionType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 buttonTitle:(id)a2 buttonActionType:(unsigned long long)a3 assetCollectionReference:(id)a4;

@end
