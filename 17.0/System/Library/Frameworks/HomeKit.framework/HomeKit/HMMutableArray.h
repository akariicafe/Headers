@class NSArray, NSMutableArray;

@interface HMMutableArray : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, copy, nonatomic) NSMutableArray *internal;
@property (copy, nonatomic) NSArray *array;
@property (readonly, nonatomic) unsigned long long count;

+ (id)array;
+ (id)arrayWithArray:(id)a0;

- (id)firstItemWithValue:(id)a0 forKey:(id)a1;
- (id)firstItemWithUUID:(id)a0;
- (void)removeAllObjects;
- (BOOL)addObjectIfNotPresent:(id)a0;
- (void)setIfDifferent:(id)a0;
- (void)addObjectsFromArray:(id)a0;
- (BOOL)containsObject:(id)a0;
- (void)removeObjectsInArray:(id)a0;
- (id)firstItemWithUniqueIdentifier:(id)a0;
- (id)firstItemWithName:(id)a0;
- (id)firstItemWithInstanceID:(id)a0;
- (id)firstItemWithCharacteristicType:(id)a0;
- (void)replaceObject:(id)a0;
- (void).cxx_destruct;
- (void)removeObject:(id)a0;
- (id)initWithArray:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)addObject:(id)a0;
- (id)filteredArrayUsingPredicate:(id)a0;
- (id)itemsWithValue:(id)a0 forKey:(id)a1;

@end
