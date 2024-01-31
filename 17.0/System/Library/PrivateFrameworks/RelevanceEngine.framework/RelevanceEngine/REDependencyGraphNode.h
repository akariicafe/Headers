@class NSHashTable;

@interface REDependencyGraphNode : NSObject

@property (readonly, nonatomic) id item;
@property (retain, nonatomic) NSHashTable *connections;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithItem:(id)a0;

@end
