@class NSURL, NSString;

@interface SSUCacheDirectoryProviderTemporary : NSObject <SSUCacheDirectoryProvider>

@property (readonly, nonatomic) NSURL *_directory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)lookupOrCreateCacheDirectory:(id *)a0;

@end
