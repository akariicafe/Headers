@class NSSet, NSDictionary, NSArray;

@interface MTChangeSet : NSObject

@property (retain, nonatomic) NSSet *changedProperties;
@property (retain, nonatomic) NSDictionary *changeDictionary;
@property (readonly, nonatomic) NSArray *changes;

+ (id)dictionaryFromChanges:(id)a0;
+ (id)changeSetWithChangesFromObject:(id)a0 toObject:(id)a1;
+ (id)changeSetWithChangesFromObject:(id)a0 toObject:(id)a1 inProperties:(id)a2;

- (id)initWithChangeDictionary:(id)a0;
- (id)initWithChanges:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_deserializer;
- (BOOL)_isEqualToChangeSet:(id)a0 checkOriginalValues:(BOOL)a1;
- (id)changeSetByAddingChangeSet:(id)a0;
- (id)changedValueForProperty:(id)a0 hasProperty:(BOOL *)a1;
- (id)deserializedChangedValueForProperty:(id)a0 hasProperty:(BOOL *)a1;
- (BOOL)hasChangeForProperty:(id)a0;
- (BOOL)hasChangesInCommonWithChangeSet:(id)a0;
- (BOOL)hasChangesInProperties:(id)a0;
- (BOOL)isEquivalentToChangeSet:(id)a0;

@end
