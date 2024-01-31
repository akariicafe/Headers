@class NSObject;
@protocol GDFactObject;

@interface GDFact : NSObject

@property (readonly, nonatomic) unsigned long long predicate;
@property (readonly, nonatomic) NSObject<GDFactObject> *object;

- (void).cxx_destruct;
- (id)initWithPredicate:(unsigned long long)a0 object:(id)a1;

@end
