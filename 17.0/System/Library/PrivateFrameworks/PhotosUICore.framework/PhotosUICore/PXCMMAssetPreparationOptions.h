@interface PXCMMAssetPreparationOptions : NSObject

@property (nonatomic) BOOL publishAsOriginal;
@property (nonatomic) BOOL publishLivePhotoAsStill;
@property (nonatomic) BOOL removeLocationData;

- (id)init;

@end
