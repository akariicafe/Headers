@interface GEOLogMsgStateMapsUserSettings : PBCodable <NSCopying> {
    int _locationCadence;
    int _locationType;
    BOOL _airQualityShown;
    BOOL _learnFromAppEnabled;
    BOOL _notificationsEnabled;
    BOOL _siriSuggestionsEnabled;
    BOOL _weatherShown;
    struct { unsigned char has_locationCadence : 1; unsigned char has_locationType : 1; unsigned char has_airQualityShown : 1; unsigned char has_learnFromAppEnabled : 1; unsigned char has_notificationsEnabled : 1; unsigned char has_siriSuggestionsEnabled : 1; unsigned char has_weatherShown : 1; } _flags;
}

@property (nonatomic) BOOL hasLocationType;
@property (nonatomic) int locationType;
@property (nonatomic) BOOL hasLocationCadence;
@property (nonatomic) int locationCadence;
@property (nonatomic) BOOL hasNotificationsEnabled;
@property (nonatomic) BOOL notificationsEnabled;
@property (nonatomic) BOOL hasSiriSuggestionsEnabled;
@property (nonatomic) BOOL siriSuggestionsEnabled;
@property (nonatomic) BOOL hasLearnFromAppEnabled;
@property (nonatomic) BOOL learnFromAppEnabled;
@property (nonatomic) BOOL hasAirQualityShown;
@property (nonatomic) BOOL airQualityShown;
@property (nonatomic) BOOL hasWeatherShown;
@property (nonatomic) BOOL weatherShown;

+ (BOOL)isValid:(id)a0;

- (id)locationTypeAsString:(int)a0;
- (unsigned long long)hash;
- (int)StringAsLocationCadence:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsLocationType:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (id)locationCadenceAsString:(int)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;

@end
