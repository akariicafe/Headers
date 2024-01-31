@class NSString;

@interface WLKCanonicalContainerRequest : WLKRequest

@property (readonly, copy, nonatomic) NSString *canonicalID;

- (void).cxx_destruct;
- (id)initWithCanonicalID:(id)a0;
- (void)makeRequestWithCompletion:(id /* block */)a0;
- (void)makeRequestWithCompletion:(id /* block */)a0 canonicalType:(long long)a1;

@end
