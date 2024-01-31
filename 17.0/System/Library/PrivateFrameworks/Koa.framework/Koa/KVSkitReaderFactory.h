@class NSMutableDictionary, NSObject;
@protocol KVSkitReadAccess;

@interface KVSkitReaderFactory : NSObject <KVSkitAccessProvider> {
    NSObject<KVSkitReadAccess> *_cachedLocalReader;
    NSMutableDictionary *_cachedRemoteReaders;
}

+ (id)_rootDirectoryURL;

- (id)init;
- (id)accessReadOnlySkitForUser:(id)a0;
- (BOOL)supportsMultiUser;
- (void).cxx_destruct;
- (BOOL)setItems:(id)a0 error:(id *)a1;
- (id)_provideAccess:(id)a0 forUser:(id)a1;

@end
