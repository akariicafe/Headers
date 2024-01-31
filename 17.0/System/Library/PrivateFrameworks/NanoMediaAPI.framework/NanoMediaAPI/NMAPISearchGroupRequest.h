@interface NMAPISearchGroupRequest : NMAPIURLRequest

@property (nonatomic) unsigned long long resultsPerSection;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (Class)responseParserClass;
- (id)urlComponentsWithStoreURLBag:(id)a0 error:(id *)a1;

@end
