@class TRIKVStore;

@interface TRIGloballyAvailableNamespaces : NSObject {
    TRIKVStore *_kvStore;
}

- (id)namespaces;
- (BOOL)setNamespaces:(id)a0;
- (void).cxx_destruct;
- (id)initWithKVStore:(id)a0;

@end
