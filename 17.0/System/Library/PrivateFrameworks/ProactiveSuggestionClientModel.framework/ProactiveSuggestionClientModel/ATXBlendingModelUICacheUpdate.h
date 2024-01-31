@class NSUUID, NSDictionary, NSString, NSDate;
@protocol ATXUICacheProtocol;

@interface ATXBlendingModelUICacheUpdate : NSObject <NSSecureCoding, BMStoreData, ATXProtoBufWrapper> {
    double _absoluteCacheCreationDate;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) id<ATXUICacheProtocol> uiCache;
@property (readonly, nonatomic) unsigned char consumerSubType;
@property (readonly, nonatomic) NSDictionary *clientModelCacheUpdateUUIDs;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSDate *cacheCreationDate;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)_initWithCoder:(id)a0;
- (id)initWithSpotlightSuggestionLayout:(id)a0 consumerSubType:(unsigned char)a1 clientModelCacheUpdates:(id)a2;
- (id)initWithProto:(id)a0;
- (id)encodeAsProto;
- (id)initWithHomeScreenCachedSuggestions:(id)a0 consumerSubType:(unsigned char)a1 clientModelCacheUpdates:(id)a2;
- (id)proto;
- (id)serialize;
- (id)initWithSuggestionLayout:(id)a0 consumerSubType:(unsigned char)a1 clientModelCacheUpdates:(id)a2;
- (id)initWithProtoData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)encodeAsProtoForBiome;
- (id)initWithUICache:(id)a0 consumerSubType:(unsigned char)a1 clientModelCacheUpdateUUIDs:(id)a2 uuid:(id)a3 cacheCreationDate:(id)a4;
- (BOOL)checkAndReportDecodingFailureIfNeededForint:(int)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (BOOL)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)jsonRawData;
- (id)json;
- (BOOL)isEqualToATXBlendingModelUICacheUpdate:(id)a0;
- (id)clientModelCacheUpdateUUIDsDictionaryFromProto:(id)a0;
- (void)setUICacheObjectOnProto:(id)a0;
- (void).cxx_destruct;
- (id)protoForBiome;
- (void)setClientModelCacheUpdateUUIDsDictionaryOnProto:(id)a0;
- (id)initWithUICache:(id)a0 consumerSubType:(unsigned char)a1 clientModelCacheUpdates:(id)a2;
- (BOOL)isEqual:(id)a0;
- (void)setUICacheObjectOnProtoForBiome:(id)a0;
- (id)clientModelCacheUpdateUUIDsFromCacheUpdates:(id)a0;
- (id)initWithCoder:(id)a0;

@end
