@class NSMutableArray, PBUnknownFields;

@interface GEOClientFeedbackInfo : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_displayedBannerEventInfos;
}

@property (retain, nonatomic) NSMutableArray *displayedBannerEventInfos;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)displayedBannerEventInfoType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void)clearUnknownFields:(BOOL)a0;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;
- (void)addDisplayedBannerEventInfo:(id)a0;
- (void)clearDisplayedBannerEventInfos;
- (id)displayedBannerEventInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)displayedBannerEventInfosCount;

@end
