@class NSString;

@interface GEOConfigStorageCFPrefsReadWrite : GEOConfigStorageCFPrefsReadOnly <GEOConfigStorageReadWrite>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setConfigValue:(id)a0 forKey:(id)a1 options:(unsigned long long)a2 synchronous:(BOOL)a3;

@end
