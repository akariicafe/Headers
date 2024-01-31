@class NSArray, NSMutableOrderedSet;

@interface SHMediaLibrarySnapshot : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableOrderedSet *changeset;
@property (readonly, nonatomic) NSArray *changes;
@property (readonly, nonatomic) BOOL hasChanges;
@property (readonly, nonatomic) NSArray *trackChanges;
@property (readonly, nonatomic) NSArray *allItemIdentifiers;

+ (id)remapSnapshot:(id)a0 withBundleIdentifier:(id)a1;

- (id)init;
- (void)removeItem:(id)a0;
- (id)initWithChanges:(id)a0;
- (void)addItem:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)addChanges:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)containsLibraryItem:(id)a0;
- (BOOL)evaluateUsingPredicate:(id)a0;
- (BOOL)isConflictingChange:(id)a0;
- (void)mergeSnapshot:(id)a0;
- (id)tracksForChangeType:(long long)a0;
- (BOOL)validateWithBundleIdentifier:(id)a0;

@end
