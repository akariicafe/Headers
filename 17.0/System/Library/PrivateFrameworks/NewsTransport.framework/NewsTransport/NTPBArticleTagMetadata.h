@class NTPBTagMetadata, NSMutableArray;

@interface NTPBArticleTagMetadata : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasChannelTagMetadata;
@property (retain, nonatomic) NTPBTagMetadata *channelTagMetadata;
@property (retain, nonatomic) NSMutableArray *topicTagMetadatas;

+ (Class)topicTagMetadataType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (unsigned long long)topicTagMetadatasCount;
- (void)clearTopicTagMetadatas;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)topicTagMetadataAtIndex:(unsigned long long)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addTopicTagMetadata:(id)a0;

@end
