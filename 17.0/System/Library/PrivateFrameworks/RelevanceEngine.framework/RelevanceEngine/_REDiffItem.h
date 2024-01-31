@interface _REDiffItem : NSObject

@property (readonly, nonatomic) id object;
@property (readonly, nonatomic) unsigned long long index;
@property (readonly, nonatomic) id /* block */ comparator;
@property (readonly, nonatomic) id /* block */ hashGenerator;

+ (id)itemWithObject:(id)a0 index:(unsigned long long)a1 comparator:(id /* block */)a2 hashGenerator:(id /* block */)a3;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
