@class NSSet, NSDictionary, NSString;

@interface HFStateDumpBuilderContext : NSObject <NSCopying, NSMutableCopying>

@property (nonatomic) unsigned long long detailLevel;
@property (nonatomic) unsigned long long outputStyle;
@property (copy, nonatomic) NSSet *objectsToExclude;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (copy, nonatomic) NSString *multilinePrefix;
@property (nonatomic) BOOL excludePrimaryID;
@property (nonatomic) BOOL includeVolatileObjects;

+ (id)contextWithDetailLevel:(unsigned long long)a0;

- (id)init;
- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithDetailLevel:(unsigned long long)a0;
- (id)copyWithOutputStyle:(unsigned long long)a0;
- (unsigned long long)derivedOutputStyle;
- (id)initWithDetailLevel:(unsigned long long)a0;

@end
