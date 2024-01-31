@class NSDictionary, PLManagedObject, NSObject;
@protocol PLAssetContainer, PLAlbumProtocol;

@interface PLAssetContainerChangeNotification : PLContainerChangeNotification {
    BOOL _titleDidChange;
    BOOL _keyAssetDidChange;
    NSDictionary *_userInfo;
}

@property (readonly, nonatomic) PLManagedObject *container;
@property (readonly, nonatomic) id<PLAssetContainer> assetContainer;
@property (readonly, nonatomic) NSObject<PLAlbumProtocol> *album;
@property (readonly, nonatomic) BOOL titleDidChange;
@property (readonly, nonatomic) BOOL keyAssetDidChange;

+ (id)notificationWithContainer:(id)a0 snapshot:(id)a1 changedAssets:(id)a2;

- (void)dealloc;
- (id)userInfo;
- (id)description;
- (void).cxx_destruct;
- (id)name;
- (void)_calculateDiffs;
- (id)_contentRelationshipName;
- (BOOL)_getOldSet:(id *)a0 newSet:(id *)a1;
- (BOOL)hasDeletes;

@end
