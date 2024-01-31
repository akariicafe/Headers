@class NSURL, NSString;

@interface SSUCacheDirectoryProviderSandbox : NSObject <SSUCacheDirectoryProvider>

@property (readonly, nonatomic) NSURL *directory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDirectory:(id)a0;
- (void).cxx_destruct;
- (id)lookupOrCreateCacheDirectory:(id *)a0;

@end
