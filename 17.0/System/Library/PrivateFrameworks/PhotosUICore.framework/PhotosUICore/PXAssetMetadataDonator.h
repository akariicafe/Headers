@class NSCountedSet, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface PXAssetMetadataDonator : NSObject

@property (class, readonly, nonatomic) PXAssetMetadataDonator *sharedDonator;

@property (retain, nonatomic) NSCountedSet *locationDescriptions;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *backgroundQueue;
@property (retain, nonatomic) NSMutableDictionary *locationDescriptionsByAssetLocalIdentifiers;

+ (id)new;

- (id)init;
- (void)donate:(id)a0;
- (id)_init;
- (void)donateMetadataForAsset:(id)a0;
- (void).cxx_destruct;
- (void)_notifyWhenDonationIsComplete:(id /* block */)a0;
- (void)applicationDidEnterBackground:(id)a0;

@end
