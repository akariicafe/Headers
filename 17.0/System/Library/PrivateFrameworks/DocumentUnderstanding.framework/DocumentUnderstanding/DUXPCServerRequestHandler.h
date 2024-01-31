@class NSString, _PASBundleIdResolver, _TtC21DocumentUnderstanding24TextUnderstandingManager;
@protocol DUDocumentHarvestingProtocol;

@interface DUXPCServerRequestHandler : NSObject <DUDocumentHarvestingProtocol> {
    id<DUDocumentHarvestingProtocol> _clientProxy;
    _TtC21DocumentUnderstanding24TextUnderstandingManager *_textUnderstandingManager;
}

@property (copy, nonatomic) NSString *clientProcessName;
@property (retain, nonatomic) _PASBundleIdResolver *bundleIdResolver;

- (void)setRemoteObjectProxy:(id)a0;
- (id)initWithManager:(id)a0;
- (void).cxx_destruct;
- (void)foundInEventResultWithSerializedDocument:(id)a0 documentType:(long long)a1 completion:(id /* block */)a2;
- (void)addOrUpdateSearchableItems:(id)a0 bundleID:(id)a1 completion:(id /* block */)a2;
- (void)addSerializedDocument:(id)a0 documentType:(long long)a1 completion:(id /* block */)a2;

@end
