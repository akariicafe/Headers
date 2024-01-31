@class NSString, NSMutableArray, NSData;

@interface IDSQRProtoAllocBindResponse : PBCodable <NSCopying> {
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _lightweightParticipantIdLists;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _peerSubscribedStreamIds;
    struct { unsigned char channelSettings : 1; unsigned char generationCounter : 1; unsigned char linkId : 1; unsigned char participantType : 1; unsigned char sessionStateCounter : 1; } _has;
}

@property (retain, nonatomic) NSString *clientAddress;
@property (nonatomic) unsigned int channelId;
@property (readonly, nonatomic) BOOL hasSoftware;
@property (retain, nonatomic) NSString *software;
@property (retain, nonatomic) NSMutableArray *peerPublishedStreams;
@property (readonly, nonatomic) unsigned long long peerSubscribedStreamIdsCount;
@property (readonly, nonatomic) unsigned int *peerSubscribedStreamIds;
@property (nonatomic) BOOL hasLinkId;
@property (nonatomic) unsigned int linkId;
@property (nonatomic) BOOL hasChannelSettings;
@property (nonatomic) unsigned int channelSettings;
@property (readonly, nonatomic) BOOL hasReportingDataBlob;
@property (retain, nonatomic) NSData *reportingDataBlob;
@property (readonly, nonatomic) unsigned long long lightweightParticipantIdListsCount;
@property (readonly, nonatomic) unsigned long long *lightweightParticipantIdLists;
@property (retain, nonatomic) NSMutableArray *quicConnectionInfos;
@property (nonatomic) BOOL hasParticipantType;
@property (nonatomic) unsigned int participantType;
@property (nonatomic) BOOL hasGenerationCounter;
@property (nonatomic) unsigned int generationCounter;
@property (nonatomic) BOOL hasSessionStateCounter;
@property (nonatomic) unsigned int sessionStateCounter;
@property (retain, nonatomic) NSMutableArray *materials;
@property (retain, nonatomic) NSMutableArray *activeExperiments;

+ (Class)activeExperimentsType;
+ (Class)materialsType;
+ (Class)peerPublishedStreamsType;
+ (Class)quicConnectionInfoType;

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
- (unsigned int)peerSubscribedStreamIdsAtIndex:(unsigned long long)a0;
- (id)activeExperimentsAtIndex:(unsigned long long)a0;
- (unsigned long long)activeExperimentsCount;
- (void)addActiveExperiments:(id)a0;
- (void)addLightweightParticipantIdList:(unsigned long long)a0;
- (void)addMaterials:(id)a0;
- (void)addPeerPublishedStreams:(id)a0;
- (void)addPeerSubscribedStreamIds:(unsigned int)a0;
- (void)addQuicConnectionInfo:(id)a0;
- (void)clearActiveExperiments;
- (void)clearLightweightParticipantIdLists;
- (void)clearPeerPublishedStreams;
- (void)clearPeerSubscribedStreamIds;
- (void)clearQuicConnectionInfos;
- (unsigned long long)lightweightParticipantIdListAtIndex:(unsigned long long)a0;
- (id)materialsAtIndex:(unsigned long long)a0;
- (id)peerPublishedStreamsAtIndex:(unsigned long long)a0;
- (unsigned long long)peerPublishedStreamsCount;
- (id)quicConnectionInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)quicConnectionInfosCount;
- (void)setLightweightParticipantIdLists:(unsigned long long *)a0 count:(unsigned long long)a1;
- (void)setPeerSubscribedStreamIds:(unsigned int *)a0 count:(unsigned long long)a1;

@end
