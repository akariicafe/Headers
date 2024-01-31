@class NSMutableDictionary;

@interface MTIDCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *cache;
@property (retain, nonatomic) NSMutableDictionary *promiseCache;

+ (BOOL)idInfo:(id)a0 isValidForDate:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)removeNamespace:(id)a0;
- (id)IDInfoForScheme:(id)a0 options:(id)a1;
- (void)addIDInfo:(id)a0 reset:(BOOL)a1;
- (void)addIdInfoPromise:(id)a0 forScheme:(id)a1 options:(id)a2;
- (id)optionsDescription:(id)a0;
- (id)promiseKeyForScheme:(id)a0 options:(id)a1;
- (void)removeAllNamespaces;
- (void)removeNamespaces:(id)a0;
- (void)removeUnsyncedNamespaces;

@end
