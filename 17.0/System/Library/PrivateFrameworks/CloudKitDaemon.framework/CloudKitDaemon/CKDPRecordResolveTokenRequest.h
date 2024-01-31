@class NSString, NSData, NSMutableArray;

@interface CKDPRecordResolveTokenRequest : PBRequest <NSCopying> {
    struct { unsigned char forceFetch : 1; unsigned char shouldFetchRootRecord : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasRoutingKey;
@property (retain, nonatomic) NSString *routingKey;
@property (readonly, nonatomic) BOOL hasShortTokenHash;
@property (retain, nonatomic) NSData *shortTokenHash;
@property (nonatomic) BOOL hasForceFetch;
@property (nonatomic) BOOL forceFetch;
@property (nonatomic) BOOL hasShouldFetchRootRecord;
@property (nonatomic) BOOL shouldFetchRootRecord;
@property (retain, nonatomic) NSMutableArray *rootRecordDesiredKeys;
@property (readonly, nonatomic) BOOL hasParticipantId;
@property (retain, nonatomic) NSString *participantId;

+ (id)options;
+ (Class)rootRecordDesiredKeysType;

- (unsigned long long)hash;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addRootRecordDesiredKeys:(id)a0;
- (void)clearRootRecordDesiredKeys;
- (id)rootRecordDesiredKeysAtIndex:(unsigned long long)a0;
- (unsigned long long)rootRecordDesiredKeysCount;

@end
