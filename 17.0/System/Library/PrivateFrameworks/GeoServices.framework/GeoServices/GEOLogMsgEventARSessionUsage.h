@class NSMutableArray, PBDataReader;

@interface GEOLogMsgEventARSessionUsage : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_arElementDetails;
    NSMutableArray *_thermalPressures;
    NSMutableArray *_vlfLocalizationResults;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _sessionTimeMs;
    unsigned int _timeRoundedToHour;
    BOOL _didLocalize;
    struct { unsigned char has_sessionTimeMs : 1; unsigned char has_timeRoundedToHour : 1; unsigned char has_didLocalize : 1; unsigned char read_arElementDetails : 1; unsigned char read_thermalPressures : 1; unsigned char read_vlfLocalizationResults : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *vlfLocalizationResults;
@property (retain, nonatomic) NSMutableArray *arElementDetails;
@property (nonatomic) BOOL hasSessionTimeMs;
@property (nonatomic) unsigned int sessionTimeMs;
@property (nonatomic) BOOL hasDidLocalize;
@property (nonatomic) BOOL didLocalize;
@property (nonatomic) BOOL hasTimeRoundedToHour;
@property (nonatomic) unsigned int timeRoundedToHour;
@property (retain, nonatomic) NSMutableArray *thermalPressures;

+ (BOOL)isValid:(id)a0;
+ (Class)arElementDetailsType;
+ (Class)thermalPressureType;
+ (Class)vlfLocalizationResultsType;

- (id)init;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;
- (void)addArElementDetails:(id)a0;
- (void)addThermalPressure:(id)a0;
- (void)addVlfLocalizationResults:(id)a0;
- (id)arElementDetailsAtIndex:(unsigned long long)a0;
- (unsigned long long)arElementDetailsCount;
- (void)clearArElementDetails;
- (void)clearThermalPressures;
- (void)clearVlfLocalizationResults;
- (id)thermalPressureAtIndex:(unsigned long long)a0;
- (unsigned long long)thermalPressuresCount;
- (id)vlfLocalizationResultsAtIndex:(unsigned long long)a0;
- (unsigned long long)vlfLocalizationResultsCount;

@end
