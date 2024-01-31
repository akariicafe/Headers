@class NSString;
@protocol PBItemRepresentationDataTransferDelegate;

@interface PBItemRepresentation : NSObject {
    id /* block */ _loader;
}

@property (nonatomic) unsigned long long preferredRepresentation;
@property (weak, nonatomic) id<PBItemRepresentationDataTransferDelegate> dataTransferDelegate;
@property (readonly, copy, nonatomic) NSString *typeIdentifier;
@property (nonatomic) long long visibility;
@property (nonatomic) BOOL isDataAvailableImmediately;

- (id)loadWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)setLoaderBlock:(id /* block */)a0;
- (id)copyWithDoNothingLoaderBlock;
- (id)initWithType:(id)a0 preferredRepresentation:(unsigned long long)a1 loader:(id /* block */)a2;
- (id)performProgressTrackingWithLoaderBlock:(id /* block */)a0 onCancelCallback:(id /* block */)a1;
- (id)loadDataWithContext:(id)a0 completion:(id /* block */)a1;
- (id)initWithType:(id)a0 preferredRepresentation:(unsigned long long)a1 v3_loader:(id /* block */)a2;
- (id)loadFileCopyWithContext:(id)a0 completion:(id /* block */)a1;
- (id)loadWithContext:(id)a0 completionHandler:(id /* block */)a1;
- (id)loadDataWithDetailedCompletion:(id /* block */)a0;
- (id)_loadWithContext:(id)a0 completionBlock:(id /* block */)a1;
- (id)initWithNSItemRepresentation:(id)a0;
- (id)initWithType:(id)a0 preferredRepresentation:(unsigned long long)a1 v2_loader:(id /* block */)a2;
- (id)loadDataWithCompletion:(id /* block */)a0;
- (id)loadFileCopyWithCompletion:(id /* block */)a0;
- (id)loadFileCopyWithDetailedCompletion:(id /* block */)a0;
- (id)loadOpenInPlaceWithCompletion:(id /* block */)a0;
- (id)loadOpenInPlaceWithContext:(id)a0 completion:(id /* block */)a1;
- (id)loadOpenInPlaceWithDetailedCompletion:(id /* block */)a0;

@end
