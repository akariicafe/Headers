@class NSArray, GDEntityIdentifier;

@interface GDEntity : NSObject <GDEntity>

@property (readonly, nonatomic) GDEntityIdentifier *entityIdentifier;
@property (readonly, nonatomic) NSArray *facts;
@property (readonly, nonatomic) unsigned long long entityClass;

- (void).cxx_destruct;
- (id)initWithEntityIdentifier:(id)a0 facts:(id)a1 entityClass:(unsigned long long)a2;

@end
