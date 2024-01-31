@class NSString, NSArray;

@interface PRPosterSnapshotDefinition : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long layerSet;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) BOOL includesHeaderElements;
@property (readonly, nonatomic) BOOL includesComplications;
@property (readonly, nonatomic) long long renderingContent;
@property (readonly, nonatomic) long long renderingMode;
@property (readonly, nonatomic) unsigned long long previewContent;
@property (readonly, copy, nonatomic) NSArray *levelSets;
@property (readonly, nonatomic, getter=isUnlocked) BOOL unlocked;

+ (long long)snapshotOptionsForDefinition:(id)a0;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)applySceneSettings:(id)a0;
- (id)initWithUniqueIdentifier:(id)a0 includeHeaderElements:(BOOL)a1 includesComplications:(BOOL)a2 layerSet:(unsigned long long)a3 isUnlocked:(BOOL)a4 renderingContent:(long long)a5 renderingMode:(long long)a6 previewContent:(unsigned long long)a7;
- (id)initWithUniqueIdentifier:(id)a0 includeHeaderElements:(BOOL)a1 includesComplications:(BOOL)a2 levelSets:(id)a3 isUnlocked:(BOOL)a4 renderingContent:(long long)a5 renderingMode:(long long)a6 previewContent:(unsigned long long)a7;
- (BOOL)isEqualToDefinition:(id)a0;

@end
