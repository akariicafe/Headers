@class NSString, NSArray, NSSet;

@interface NTKArgonDiskKeyDatabase : NSObject <NTKArgonKeyDatabaseProviding> {
    NSArray *_searchPaths;
    NSSet *_knownKeyDescriptors;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clearCaches;
- (id)keyDescriptorForFileName:(id)a0;
- (void).cxx_destruct;
- (id)initWithSearchPathDomains:(unsigned long long)a0;
- (void)_locked_rebuildCache;
- (id)keyDescriptorEnumerator;

@end
