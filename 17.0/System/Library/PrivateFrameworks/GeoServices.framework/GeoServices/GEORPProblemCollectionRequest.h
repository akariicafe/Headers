@class PBDataReader, NSString, GEORPUserCredentials, NSData, GEOLocation, NSMutableArray, GEORPDebugSettings;

@interface GEORPProblemCollectionRequest : PBRequest <NSCopying> {
    PBDataReader *_reader;
    NSString *_countryCode;
    GEORPDebugSettings *_debugSettings;
    NSData *_devicePushToken;
    NSString *_hwMachine;
    NSString *_inputLanguage;
    NSString *_osRelease;
    NSMutableArray *_requestElements;
    GEORPUserCredentials *_userCredentials;
    NSString *_userEmail;
    GEOLocation *_userLocation;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_countryCode : 1; unsigned char read_debugSettings : 1; unsigned char read_devicePushToken : 1; unsigned char read_hwMachine : 1; unsigned char read_inputLanguage : 1; unsigned char read_osRelease : 1; unsigned char read_requestElements : 1; unsigned char read_userCredentials : 1; unsigned char read_userEmail : 1; unsigned char read_userLocation : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *requestElements;
@property (readonly, nonatomic) BOOL hasHwMachine;
@property (retain, nonatomic) NSString *hwMachine;
@property (readonly, nonatomic) BOOL hasOsRelease;
@property (retain, nonatomic) NSString *osRelease;
@property (readonly, nonatomic) BOOL hasCountryCode;
@property (retain, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) BOOL hasInputLanguage;
@property (retain, nonatomic) NSString *inputLanguage;
@property (readonly, nonatomic) BOOL hasUserCredentials;
@property (retain, nonatomic) GEORPUserCredentials *userCredentials;
@property (readonly, nonatomic) BOOL hasDevicePushToken;
@property (retain, nonatomic) NSData *devicePushToken;
@property (readonly, nonatomic) BOOL hasUserEmail;
@property (retain, nonatomic) NSString *userEmail;
@property (readonly, nonatomic) BOOL hasUserLocation;
@property (retain, nonatomic) GEOLocation *userLocation;
@property (readonly, nonatomic) BOOL hasDebugSettings;
@property (retain, nonatomic) GEORPDebugSettings *debugSettings;

+ (BOOL)isValid:(id)a0;
+ (Class)requestElementType;

- (id)init;
- (unsigned long long)hash;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;
- (void)addRequestElement:(id)a0;
- (void)clearRequestElements;
- (id)requestElementAtIndex:(unsigned long long)a0;
- (unsigned long long)requestElementsCount;

@end
