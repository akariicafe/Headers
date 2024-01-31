@class ML3MusicLibrary, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface ML3AccountCacheDatabase : NSObject {
    NSMutableDictionary *_propertiesCache;
    NSObject<OS_dispatch_queue> *accessQueue;
    ML3MusicLibrary *_library;
}

- (id)initWithLibrary:(id)a0;
- (void).cxx_destruct;
- (id)appleIDForDSID:(unsigned long long)a0;
- (id)_cacheEntryForDSID:(unsigned long long)a0;
- (void)_setCacheEntry:(id)a0 forDSID:(unsigned long long)a1;
- (BOOL)getPropertiesForDSID:(unsigned long long)a0 appleID:(id *)a1 altDSID:(id *)a2;
- (BOOL)setAppleID:(id)a0 altDSID:(id)a1 forDSID:(unsigned long long)a2;
- (BOOL)setAppleID:(id)a0 forDSID:(unsigned long long)a1;

@end
