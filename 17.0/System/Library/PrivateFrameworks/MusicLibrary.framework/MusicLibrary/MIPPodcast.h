@class NSString, MIPArtist, MIPSeries;

@interface MIPPodcast : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasArtist;
@property (retain, nonatomic) MIPArtist *artist;
@property (readonly, nonatomic) BOOL hasSeries;
@property (retain, nonatomic) MIPSeries *series;
@property (readonly, nonatomic) BOOL hasExternalGuid;
@property (retain, nonatomic) NSString *externalGuid;
@property (readonly, nonatomic) BOOL hasFeedUrl;
@property (retain, nonatomic) NSString *feedUrl;

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
