@class NSString;

@interface GEOConfigStorageCFPrefsReadOnly : NSObject <GEOConfigStorageReadOnly>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getConfigValueForKey:(id)a0 countryCode:(id)a1 options:(unsigned long long)a2 source:(long long *)a3;
- (void)resync;

@end
