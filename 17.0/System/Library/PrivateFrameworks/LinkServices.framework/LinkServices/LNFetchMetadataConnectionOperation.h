@class LNBundleMetadata;

@interface LNFetchMetadataConnectionOperation : LNInterfaceConnectionOperation

@property (retain, nonatomic) LNBundleMetadata *metadata;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void)start;
- (void).cxx_destruct;
- (void)finishWithError:(id)a0;
- (id)initWithConnectionInterface:(id)a0 queue:(id)a1 completionHandler:(id /* block */)a2;

@end
