@class NSArray, NSDictionary, FedStatsSQLiteCategoryDatabase;

@interface FedStatsCategoricalType : FedStatsBoundedULongType

@property (readonly, nonatomic) unsigned long long version;
@property (readonly, copy, nonatomic) NSArray *categories;
@property (readonly, copy, nonatomic) NSDictionary *categoryMap;
@property (readonly, copy, nonatomic) FedStatsSQLiteCategoryDatabase *categoryFile;

+ (id)createFromDict:(id)a0 possibleError:(id *)a1;

- (long long)dataType;
- (void).cxx_destruct;
- (void)setVersion:(unsigned long long)a0;
- (id)initWithCategories:(id)a0;
- (id)initWithCategoryMap:(id)a0 categories:(id)a1;
- (id)sampleForIndex:(unsigned long long)a0;
- (id)decodeFromIndex:(id)a0 possibleError:(id *)a1;
- (id)encodeToIndex:(id)a0 possibleError:(id *)a1;
- (id)initWithCategoryFile:(id)a0;
- (id)kOutOfCategories;

@end
