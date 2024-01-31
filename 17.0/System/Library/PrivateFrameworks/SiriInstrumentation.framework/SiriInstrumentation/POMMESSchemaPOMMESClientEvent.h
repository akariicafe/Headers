@class POMMESSchemaPOMMESResourceDownloadContext, POMMESSchemaPOMMESCacheLookupContext, SISchemaInstrumentationMessage, POMMESSchemaPOMMESServiceClassifierScoreReported, POMMESSchemaPOMMESDebugPerformanceReported, POMMESSchemaPOMMESPegasusRequestContext, POMMESSchemaPOMMESCacheInvalidationContext, POMMESSchemaPOMMESOnDeviceIndexSearchContext, POMMESSchemaPOMMESClientEventMetadata, POMMESSchemaPOMMESProfileSliceResolutionRequestContext, POMMESSchemaPOMMESPegasusKitPegasusRequestContext, POMMESSchemaPOMMESRequestContext, POMMESSchemaPOMMESCacheStoringContext, NSData;

@interface POMMESSchemaPOMMESClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) POMMESSchemaPOMMESClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) POMMESSchemaPOMMESPegasusRequestContext *pegasusRequestContext;
@property (nonatomic) BOOL hasPegasusRequestContext;
@property (retain, nonatomic) POMMESSchemaPOMMESOnDeviceIndexSearchContext *onDeviceIndexSearchContext;
@property (nonatomic) BOOL hasOnDeviceIndexSearchContext;
@property (retain, nonatomic) POMMESSchemaPOMMESServiceClassifierScoreReported *pommesServiceClassifierScoreReported;
@property (nonatomic) BOOL hasPommesServiceClassifierScoreReported;
@property (retain, nonatomic) POMMESSchemaPOMMESRequestContext *pommesRequestContext;
@property (nonatomic) BOOL hasPommesRequestContext;
@property (retain, nonatomic) POMMESSchemaPOMMESDebugPerformanceReported *performanceReported;
@property (nonatomic) BOOL hasPerformanceReported;
@property (retain, nonatomic) POMMESSchemaPOMMESProfileSliceResolutionRequestContext *profileResolutionRequestContext;
@property (nonatomic) BOOL hasProfileResolutionRequestContext;
@property (retain, nonatomic) POMMESSchemaPOMMESPegasusKitPegasusRequestContext *pegasusKitRequestContext;
@property (nonatomic) BOOL hasPegasusKitRequestContext;
@property (retain, nonatomic) POMMESSchemaPOMMESResourceDownloadContext *resourceDownloadContext;
@property (nonatomic) BOOL hasResourceDownloadContext;
@property (retain, nonatomic) POMMESSchemaPOMMESCacheLookupContext *cacheLookupContext;
@property (nonatomic) BOOL hasCacheLookupContext;
@property (retain, nonatomic) POMMESSchemaPOMMESCacheStoringContext *cacheStoringContext;
@property (nonatomic) BOOL hasCacheStoringContext;
@property (retain, nonatomic) POMMESSchemaPOMMESCacheInvalidationContext *cacheInvalidationContext;
@property (nonatomic) BOOL hasCacheInvalidationContext;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (int)joinability;

- (int)componentName;
- (int)getAnyEventType;
- (unsigned long long)hash;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)getComponentId;
- (void)deleteCacheInvalidationContext;
- (void)deleteCacheLookupContext;
- (void)deleteCacheStoringContext;
- (void)deleteEventMetadata;
- (void)deleteOnDeviceIndexSearchContext;
- (void)deletePegasusKitRequestContext;
- (void)deletePegasusRequestContext;
- (void)deletePerformanceReported;
- (void)deletePommesRequestContext;
- (void)deletePommesServiceClassifierScoreReported;
- (void)deleteProfileResolutionRequestContext;
- (void)deleteResourceDownloadContext;

@end
