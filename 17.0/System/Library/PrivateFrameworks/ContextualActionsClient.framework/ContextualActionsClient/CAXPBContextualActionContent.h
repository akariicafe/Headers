@class NSString, NSData;

@interface CAXPBContextualActionContent : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *contentType;
@property (readonly, nonatomic) BOOL hasContentMetadata;
@property (retain, nonatomic) NSData *contentMetadata;

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
