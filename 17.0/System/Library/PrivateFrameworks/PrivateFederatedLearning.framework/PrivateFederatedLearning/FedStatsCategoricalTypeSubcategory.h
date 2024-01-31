@class NSString;

@interface FedStatsCategoricalTypeSubcategory : NSObject

@property (readonly, copy, nonatomic) NSString *superCategory;
@property (readonly, nonatomic) unsigned long long index;

+ (id)categoryWithSuperCategory:(id)a0 index:(unsigned long long)a1;

- (void).cxx_destruct;
- (id)initWithSuperCategory:(id)a0 index:(unsigned long long)a1;

@end
