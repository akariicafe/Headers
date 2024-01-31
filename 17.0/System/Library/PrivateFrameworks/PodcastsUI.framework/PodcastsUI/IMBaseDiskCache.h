@class NSString;

@interface IMBaseDiskCache : NSObject <IMCache>

@property (retain, nonatomic) NSString *basePath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)clearCache;
- (void)initialize;
- (id)initWithBasePath:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (id)pathForKey:(id)a0;
- (id)_allFiles;
- (BOOL)hasItemForKey:(id)a0;
- (void)removeItemForKey:(id)a0;
- (void)removeItemsWithPrefx:(id)a0;

@end
