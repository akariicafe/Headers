@class MPModelObject;

@interface NMAPIModelObjectRequest : NMAPIRequest

@property (retain, nonatomic) MPModelObject *modelObject;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithModelObject:(id)a0;
- (Class)responseParserClass;
- (id)urlComponentsWithStoreURLBag:(id)a0 error:(id *)a1;

@end
