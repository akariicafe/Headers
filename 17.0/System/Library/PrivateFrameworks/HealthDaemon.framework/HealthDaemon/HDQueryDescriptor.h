@class HDSQLitePredicate, NSSet, NSDictionary, _HKFilter;

@interface HDQueryDescriptor : NSObject <NSCopying>

@property (readonly, copy, nonatomic) _HKFilter *filter;
@property (readonly, copy, nonatomic) HDSQLitePredicate *deletedObjectsPredicate;
@property (readonly, copy, nonatomic) NSSet *sampleTypes;
@property (readonly, copy, nonatomic) NSDictionary *encodingOptions;
@property (readonly, copy, nonatomic) NSSet *restrictedSourceEntities;
@property (readonly, copy, nonatomic) id /* block */ authorizationFilter;
@property (readonly, copy, nonatomic) HDSQLitePredicate *samplePredicate;

+ (id)queryDescriptorWithSampleType:(id)a0;
+ (id)queryDescriptorWithSampleTypes:(id)a0;

- (id)initWithSampleTypes:(id)a0 encodingOptions:(id)a1 restrictedSourceEntities:(id)a2 authorizationFilter:(id /* block */)a3 filter:(id)a4 samplePredicate:(id)a5 deletedObjectsPredicate:(id)a6;
- (id)init;
- (unsigned long long)hash;
- (id)initWithSampleTypes:(id)a0 encodingOptions:(id)a1 restrictedSourceEntities:(id)a2 authorizationFilter:(id /* block */)a3 samplePredicate:(id)a4;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
