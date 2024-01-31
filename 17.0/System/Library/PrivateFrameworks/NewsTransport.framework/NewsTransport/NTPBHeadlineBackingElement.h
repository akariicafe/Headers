@class NSData;

@interface NTPBHeadlineBackingElement : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasArticleRecordData;
@property (retain, nonatomic) NSData *articleRecordData;
@property (readonly, nonatomic) BOOL hasSourceChannelRecordData;
@property (retain, nonatomic) NSData *sourceChannelRecordData;
@property (readonly, nonatomic) BOOL hasParentIssueRecordData;
@property (retain, nonatomic) NSData *parentIssueRecordData;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
