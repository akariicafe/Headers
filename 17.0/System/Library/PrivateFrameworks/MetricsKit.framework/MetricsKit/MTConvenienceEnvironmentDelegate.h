@interface MTConvenienceEnvironmentDelegate : MTEnvironmentStoreDelegate

@property (copy, nonatomic) id /* block */ _pageURLBlock;
@property (copy, nonatomic) id /* block */ _resourceRevNumBlock;
@property (copy, nonatomic) id /* block */ _hostAppBlock;

- (id)init;
- (id)pageUrl;
- (void).cxx_destruct;
- (id)hostApp;
- (id)resourceRevNum;
- (id)initWithPageURLBlock:(id /* block */)a0 resourceRevNumBlock:(id /* block */)a1 hostAppBlock:(id /* block */)a2;

@end
