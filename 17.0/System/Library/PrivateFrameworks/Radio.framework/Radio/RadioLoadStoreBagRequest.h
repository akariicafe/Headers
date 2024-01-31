@interface RadioLoadStoreBagRequest : RadioRequest

@property (nonatomic) BOOL ignoresRadioDiskCache;

- (void)loadStoreBagWithOptions:(long long)a0 completionHandler:(id /* block */)a1;

@end
