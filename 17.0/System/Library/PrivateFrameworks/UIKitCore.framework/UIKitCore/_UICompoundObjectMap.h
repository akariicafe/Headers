@class NSMutableDictionary;

@interface _UICompoundObjectMap : NSObject {
    NSMutableDictionary *_mapTable;
}

@property (readonly, nonatomic) unsigned long long count;

+ (id)compoundObjectMap;

- (id)init;
- (void)addEntriesFromCompoundObjectMap:(id)a0 keepingCurrentValues:(BOOL)a1;
- (id)description;
- (id)valueForObject:(id)a0 andProperty:(id)a1;
- (void).cxx_destruct;
- (id)deepCopy;
- (void)performWithEach:(id /* block */)a0;
- (void)removeAllMappings;
- (void)setValue:(id)a0 forObject:(id)a1 andProperty:(id)a2;

@end
