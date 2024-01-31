@class NSString;

@interface BMPBUserActivityMetadataTopic : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasTopicIdentifier;
@property (retain, nonatomic) NSString *topicIdentifier;
@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) NSString *title;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
