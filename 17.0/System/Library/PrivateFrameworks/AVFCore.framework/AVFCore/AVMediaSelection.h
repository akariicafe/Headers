@class AVAsset, AVMediaSelectionInternal;

@interface AVMediaSelection : NSObject <NSCopying, NSMutableCopying> {
    AVMediaSelectionInternal *_mediaSelection;
}

@property (readonly, weak, nonatomic) AVAsset *asset;

- (unsigned long long)hash;
- (void)dealloc;
- (id)propertyList;
- (id)_initWithAsset:(id)a0 selectedMediaArray:(id)a1;
- (id)_initWithDeferredLoadingOfAsset:(id)a0 selectedMediaArray:(id)a1;
- (id)_internal;
- (id)selectedMediaOptionInMediaSelectionGroup:(id)a0;
- (id)_dictionaryGroupsWithSelectedOption;
- (id)description;
- (id)_initWithAsset:(id)a0;
- (void)_loadiVarsIfNeeded;
- (BOOL)mediaSelectionCriteriaCanBeAppliedAutomaticallyToMediaSelectionGroup:(id)a0;
- (id)_propertyListForSelectedMediaOptionInMediaSelectionGroup:(id)a0;
- (id)_initWithAssetWithoutGroupDictionaries:(id)a0;
- (id)_groupDictionaries;
- (BOOL)isEqual:(id)a0;
- (id)_selectedMediaArray;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)_createDefaultMediaSelectionOptions;
- (id)initWithAsset:(id)a0 propertyList:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
