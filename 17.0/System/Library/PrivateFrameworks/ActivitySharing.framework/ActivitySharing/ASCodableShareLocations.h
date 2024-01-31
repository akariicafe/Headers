@class NSString;

@interface ASCodableShareLocations : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasActivityShareURL;
@property (retain, nonatomic) NSString *activityShareURL;
@property (readonly, nonatomic) BOOL hasRelationshipShareURL;
@property (retain, nonatomic) NSString *relationshipShareURL;

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
