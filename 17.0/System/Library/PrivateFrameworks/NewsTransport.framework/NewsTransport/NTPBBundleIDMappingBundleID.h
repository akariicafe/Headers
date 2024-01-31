@class NSString, NSMutableArray;

@interface NTPBBundleIDMappingBundleID : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *bundleId;
@property (retain, nonatomic) NSMutableArray *topicTags;
@property (retain, nonatomic) NSMutableArray *channelTags;
@property (retain, nonatomic) NSMutableArray *sectionTags;

+ (Class)channelTagsType;
+ (Class)sectionTagsType;
+ (Class)topicTagsType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addChannelTags:(id)a0;
- (void)addSectionTags:(id)a0;
- (void)addTopicTags:(id)a0;
- (id)channelTagsAtIndex:(unsigned long long)a0;
- (unsigned long long)channelTagsCount;
- (void)clearChannelTags;
- (void)clearSectionTags;
- (void)clearTopicTags;
- (id)sectionTagsAtIndex:(unsigned long long)a0;
- (unsigned long long)sectionTagsCount;
- (id)topicTagsAtIndex:(unsigned long long)a0;
- (unsigned long long)topicTagsCount;

@end
