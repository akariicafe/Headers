@class NSString, CKDPRecordIdentifier, NSMutableArray;

@interface CKDPRecordDeleteRequest : PBRequest <NSCopying> {
    struct { unsigned char participantKeyLost : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasRecordIdentifier;
@property (retain, nonatomic) CKDPRecordIdentifier *recordIdentifier;
@property (readonly, nonatomic) BOOL hasEtag;
@property (retain, nonatomic) NSString *etag;
@property (retain, nonatomic) NSMutableArray *pluginFields;
@property (nonatomic) BOOL hasParticipantKeyLost;
@property (nonatomic) BOOL participantKeyLost;
@property (retain, nonatomic) NSMutableArray *publicKeys;

+ (id)options;
+ (Class)pluginFieldsType;
+ (Class)publicKeysType;

- (unsigned long long)hash;
- (void)addPluginFields:(id)a0;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (BOOL)readFrom:(id)a0;
- (void)clearPluginFields;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (unsigned long long)pluginFieldsCount;
- (id)pluginFieldsAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)publicKeysCount;
- (void)clearPublicKeys;
- (void)addPublicKeys:(id)a0;
- (id)publicKeysAtIndex:(unsigned long long)a0;

@end
