@class IDSQRProtoAllocBindTestOption, NSString, NSData, NSMutableArray;

@interface IDSQRProtoAllocBindRequest : PBRequest <NSCopying> {
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _publishedStreamIds;
    struct { unsigned char capabilities : 1; unsigned char channelBindingInfo : 1; unsigned char maxConcurrentStreams : 1; unsigned char maxEmbeddedStatsResponseDelay : 1; unsigned char serviceId : 1; unsigned char stateFlags : 1; unsigned char allWildcardSubscription : 1; } _has;
}

@property (nonatomic) BOOL hasServiceId;
@property (nonatomic) unsigned int serviceId;
@property (readonly, nonatomic) BOOL hasClientOsVersion;
@property (retain, nonatomic) NSString *clientOsVersion;
@property (readonly, nonatomic) BOOL hasClientHwVersion;
@property (retain, nonatomic) NSString *clientHwVersion;
@property (nonatomic) BOOL hasCapabilities;
@property (nonatomic) unsigned long long capabilities;
@property (readonly, nonatomic) unsigned long long publishedStreamIdsCount;
@property (readonly, nonatomic) unsigned int *publishedStreamIds;
@property (retain, nonatomic) NSMutableArray *subscribedStreams;
@property (nonatomic) BOOL hasAllWildcardSubscription;
@property (nonatomic) BOOL allWildcardSubscription;
@property (nonatomic) BOOL hasMaxConcurrentStreams;
@property (nonatomic) unsigned int maxConcurrentStreams;
@property (nonatomic) BOOL hasChannelBindingInfo;
@property (nonatomic) unsigned int channelBindingInfo;
@property (nonatomic) BOOL hasMaxEmbeddedStatsResponseDelay;
@property (nonatomic) unsigned int maxEmbeddedStatsResponseDelay;
@property (retain, nonatomic) NSMutableArray *quicConnectionInfos;
@property (nonatomic) BOOL hasStateFlags;
@property (nonatomic) unsigned int stateFlags;
@property (readonly, nonatomic) BOOL hasRandomSalt;
@property (retain, nonatomic) NSData *randomSalt;
@property (readonly, nonatomic) BOOL hasAccessToken;
@property (retain, nonatomic) NSData *accessToken;
@property (readonly, nonatomic) BOOL hasServerBlob;
@property (retain, nonatomic) NSData *serverBlob;
@property (readonly, nonatomic) BOOL hasTestOption;
@property (retain, nonatomic) IDSQRProtoAllocBindTestOption *testOption;
@property (retain, nonatomic) NSMutableArray *materials;

+ (Class)materialsType;
+ (Class)quicConnectionInfoType;
+ (Class)subscribedStreamsType;

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)materialsCount;
- (id)description;
- (void)clearMaterials;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addMaterials:(id)a0;
- (void)addPublishedStreamIds:(unsigned int)a0;
- (void)addQuicConnectionInfo:(id)a0;
- (void)addSubscribedStreams:(id)a0;
- (void)clearPublishedStreamIds;
- (void)clearQuicConnectionInfos;
- (void)clearSubscribedStreams;
- (id)materialsAtIndex:(unsigned long long)a0;
- (unsigned int)publishedStreamIdsAtIndex:(unsigned long long)a0;
- (id)quicConnectionInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)quicConnectionInfosCount;
- (void)setPublishedStreamIds:(unsigned int *)a0 count:(unsigned long long)a1;
- (id)subscribedStreamsAtIndex:(unsigned long long)a0;
- (unsigned long long)subscribedStreamsCount;

@end
