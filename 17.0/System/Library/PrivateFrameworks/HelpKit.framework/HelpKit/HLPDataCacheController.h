@class NSObject, NSString, NSMutableDictionary, NSMutableArray, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface HLPDataCacheController : NSObject {
    NSObject<OS_dispatch_queue> *_dataCacheSerialQueue;
    long long _dataType;
}

@property (nonatomic) unsigned long long cacheSize;
@property (nonatomic) unsigned long long maxDataCacheSize;
@property (nonatomic) BOOL dataCacheDirty;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSUserDefaults *userDefaults;
@property (retain, nonatomic) NSMutableDictionary *dataCacheMap;
@property (retain, nonatomic) NSString *cacheDirectory;
@property (retain, nonatomic) NSMutableArray *originFetchItems;
@property (nonatomic) float defaultPriority;
@property (nonatomic) BOOL backgroundOriginUpdate;
@property (retain, nonatomic) NSString *languageCode;
@property (retain, nonatomic) NSMutableArray *dataCacheArray;

+ (id)sharedInstance;
+ (void)setAppGroupIdentifier:(id)a0;

- (void)commonInit;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)updateCache;
- (void)reloadDataCache;
- (void)addDataCache:(id)a0;
- (id)cacheFileURLForDataCache:(id)a0;
- (id)cacheFileURLForIdentifier:(id)a0;
- (void)cancelAllOriginSessionItems;
- (void)createCacheDirectory;
- (id)dataCacheForIdentifier:(id)a0;
- (id)formattedDataWithData:(id)a0;
- (id)formattedDataWithFileURL:(id)a0;
- (void)formattedDataWithFileURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithIdentifier:(id)a0 directoryName:(id)a1 maxCacheSize:(unsigned long long)a2 URLSessionDataType:(long long)a3;
- (BOOL)isURLValid:(id)a0;
- (id)newDataCache;
- (void)removeAllDataCache;
- (void)removeCacheForIdentifier:(id)a0;
- (void)removeDataCache:(id)a0;
- (void)removeDataCache:(id)a0 updateCache:(BOOL)a1;
- (id)saveFileURL:(id)a0 identifier:(id)a1 fileSize:(unsigned long long)a2 lastModified:(id)a3 dataCache:(id)a4;
- (void)syncCacheImmediately;
- (void)updateCacheDelay;
- (BOOL)cacheValidForIdentifier:(id)a0 path:(id)a1;
- (id)dataCacheForPath:(id)a0;
- (id)formattedDataForPath:(id)a0 identifier:(id)a1 completionHandler:(id /* block */)a2;
- (id)formattedDataForRequest:(id)a0 identifier:(id)a1 completionHandler:(id /* block */)a2;

@end
