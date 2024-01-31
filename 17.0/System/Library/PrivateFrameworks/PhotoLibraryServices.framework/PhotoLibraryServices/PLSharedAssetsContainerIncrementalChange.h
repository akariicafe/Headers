@class NSArray;

@interface PLSharedAssetsContainerIncrementalChange : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long collectionChangeType;
@property (nonatomic) long long sharingChange;
@property (nonatomic) unsigned char suggestionStateChange;
@property (nonatomic) unsigned char mediaType;
@property (nonatomic) BOOL hasNoOtherAssetChangesRequiringMomentGeneration;
@property (retain, nonatomic) NSArray *highlightContainerChanges;

- (BOOL)hasChanges;
- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)hasSuggestionChanges;
- (void)mergeChangesFrom:(id)a0;
- (BOOL)hasSharingOrSuggestionChanges;
- (BOOL)hasChangesAffectingSharingComposition;
- (BOOL)hasSharingChanges;
- (void).cxx_destruct;
- (void)addHighlightContainerChange:(id)a0 sourceHighlightID:(id)a1 destinationHighlightID:(id)a2;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
