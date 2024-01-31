@class MPModelObject;

@interface NMSKeepLocalRequest : NSObject

@property (readonly, nonatomic) MPModelObject *modelObject;
@property (readonly, nonatomic) long long enableState;

- (void).cxx_destruct;
- (id)initWithModelObject:(id)a0 enableState:(long long)a1;
- (void)performWithOptions:(id)a0 completion:(id /* block */)a1;

@end
