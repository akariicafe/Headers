@class NSMapTable;

@interface HKMultimap : NSObject <NSCopying> {
    NSMapTable *_table;
}

@property (readonly, nonatomic) unsigned long long count;

+ (id)multimapWithStrongObjects;
+ (id)multimapWithWeakObjects;

- (id)init;
- (unsigned long long)hash;
- (void)removeObject:(id)a0 forKey:(id)a1;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)objectsForKey:(id)a0;
- (void)removeObjectsForKey:(id)a0;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0;
- (void)removeObject:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
