@class NSSet, NSMutableDictionary;

@interface _LTDLanguageAssetCache : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSMutableDictionary *cache;
@property (readonly, nonatomic) NSSet *requiredAssetIdentifiers;
@property BOOL isHot;

+ (id)shared;

- (id)init;
- (void)reset;
- (void).cxx_destruct;
- (id)assetForIdentifier:(id)a0;
- (id)_availableIdentifiers;
- (void)_hardReset;
- (id)_readAllAssets;
- (void)applyAssetUpdates:(id)a0;
- (id)assetForIdentifier:(id)a0 createIfNotFound:(BOOL)a1;
- (id)assetsFilteredUsing:(unsigned long long)a0;
- (BOOL)isCancelledDownloadComponent:(id)a0;
- (id)preheatWithLanguages:(id)a0;
- (void)setRequiredAssets:(id)a0;

@end
