@class NSString;

@interface NSItemProviderRepresentation : NSObject {
    id /* block */ _loader;
}

@property (readonly, copy, nonatomic) NSString *typeIdentifier;
@property (nonatomic) long long visibility;
@property (nonatomic) long long preferredRepresentation;

- (void)dealloc;
- (void)setLoaderBlock:(id /* block */)a0;
- (id)_loadWithOptions:(id)a0 completionBlock:(id /* block */)a1;
- (id)copyWithDoNothingLoaderBlock;
- (id)initWithType:(id)a0 preferredRepresentation:(long long)a1 loader:(id /* block */)a2;
- (id)initWithType_v2:(id)a0 preferredRepresentation:(long long)a1 loader:(id /* block */)a2;
- (id)loadDataWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (id)loadDataWithOptions_v2:(id)a0 completionHandler:(id /* block */)a1;
- (id)loadFileCopyWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (id)loadFileCopyWithOptions_v2:(id)a0 completionHandler:(id /* block */)a1;
- (id)loadOpenInPlaceWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (id)loadOpenInPlaceWithOptions_v2:(id)a0 completionHandler:(id /* block */)a1;
- (id)loadWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (id)loadWithOptions_v2:(id)a0 completionHandler:(id /* block */)a1;
- (id)performProgressTrackingWithLoaderBlock:(id /* block */)a0 onCancelCallback:(id /* block */)a1;
- (void)setLoaderBlock_v2:(id /* block */)a0;

@end
