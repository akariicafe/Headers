@class NSString, NSArray;
@protocol PXDisplayAsset, PXDisplayCollectionList, PXDisplayCollection, PXDisplayAssetCollection, PXDisplayPerson, NSObject;

@interface PXProgrammaticNavigationDestination : NSObject {
    NSString *_userAlbumName;
}

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long revealMode;
@property (readonly, nonatomic) NSString *source;
@property (readonly, copy, nonatomic) NSString *assetUUID;
@property (readonly, copy, nonatomic) NSString *assetLocalIdentifier;
@property (readonly, nonatomic) id<PXDisplayAsset> asset;
@property (readonly, copy, nonatomic) NSString *assetCollectionUUID;
@property (readonly, copy, nonatomic) NSString *assetCollectionLocalIdentifier;
@property (readonly, copy, nonatomic) NSString *assetCollectionTransientIdentifier;
@property (readonly, nonatomic) long long assetCollectionType;
@property (readonly, nonatomic) long long assetCollectionSubtype;
@property (readonly, nonatomic) id<PXDisplayAssetCollection> assetCollection;
@property (readonly, copy, nonatomic) NSString *collectionListUUID;
@property (readonly, nonatomic) long long collectionListType;
@property (readonly, nonatomic) long long collectionListSubtype;
@property (readonly, nonatomic) id<PXDisplayCollectionList> collectionList;
@property (readonly, nonatomic) id<PXDisplayCollection> collection;
@property (readonly, copy, nonatomic) NSArray *collectionHierarchy;
@property (readonly, copy, nonatomic) NSString *personUUID;
@property (readonly, copy, nonatomic) NSString *personLocalIdentifier;
@property (readonly, nonatomic) id<PXDisplayPerson> person;
@property (readonly, copy, nonatomic) NSString *importSourceUUID;
@property (readonly, copy, nonatomic) PXProgrammaticNavigationDestination *sidebarBackNavigationRootDestination;
@property (readonly, nonatomic) id<NSObject> additionalAttributes;
@property (readonly, nonatomic) NSString *publicDescription;
@property (readonly, nonatomic) BOOL renderAlbumAssetsWithDeferredProcessing;
@property (readonly, nonatomic) BOOL displayAlbumOptions;
@property (readonly, nonatomic, getter=isTargetingAsset) BOOL targetingAsset;
@property (readonly, copy, nonatomic) NSString *libraryViewMode;

- (id)initWithURL:(id)a0;
- (unsigned long long)hash;
- (id)initWithSearchTerm:(id)a0;
- (BOOL)isEqualToNavigationDestination:(id)a0;
- (id)initWithType:(long long)a0 revealMode:(long long)a1 asset:(id)a2 assetCollection:(id)a3;
- (id)description;
- (id)initWithType:(long long)a0 revealMode:(long long)a1;
- (id)initWithImportSourceUUID:(id)a0 revealMode:(long long)a1;
- (id)initWithObject:(id)a0 revealMode:(long long)a1 sidebarNavigationBackButtonRootDestination:(id)a2;
- (id)initWithObject:(id)a0 revealMode:(long long)a1;
- (id)initWithType:(long long)a0 revealMode:(long long)a1 assetUUID:(id)a2 assetCollectionUUID:(id)a3;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithSearchText:(id)a0;
- (id)initWithICloudLinkUUID:(id)a0;

@end
