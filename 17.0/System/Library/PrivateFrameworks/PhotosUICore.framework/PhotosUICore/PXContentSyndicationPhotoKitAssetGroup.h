@class NSArray;

@interface PXContentSyndicationPhotoKitAssetGroup : NSObject

@property (readonly, nonatomic) NSArray *userLibraryAssets;
@property (readonly, nonatomic) NSArray *unsavedSyndicatedAssets;
@property (readonly, nonatomic) NSArray *syndicationIdentifiers;

- (void).cxx_destruct;
- (id)initWithAssets:(id)a0;

@end
