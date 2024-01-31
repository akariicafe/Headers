@class SUSectionsResponse, NSString, NSNumber, SUClientInterface;

@interface SULoadSectionsOperation : ISOperation <ISURLOperationDelegate> {
    NSString *_activeSectionVersionString;
    SUClientInterface *_clientInterface;
    SUSectionsResponse *_sectionsResponse;
    BOOL _shouldUseCache;
}

@property (copy) NSString *activeSectionVersionString;
@property BOOL shouldUseCache;
@property (readonly) SUSectionsResponse *sectionsResponse;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSessionDuration;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentage;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)run;
- (void)dealloc;
- (id)_cachePathForVersion:(id)a0 create:(BOOL)a1;
- (BOOL)_loadSectionsFromCacheForVersion:(id)a0;
- (BOOL)_loadSectionsFromNetworkWithDictionary:(id)a0;
- (void)_setSectionsResponse:(id)a0;
- (void)_writeSectionsResponseToCache:(id)a0 forVersion:(id)a1;
- (id)initWithClientInterface:(id)a0;

@end
