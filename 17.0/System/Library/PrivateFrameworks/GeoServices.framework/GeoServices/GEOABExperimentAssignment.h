@class PBDataReader, NSString, GEOABDebugPanelExperimentBranch, PBUnknownFields;

@interface GEOABExperimentAssignment : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOABDebugPanelExperimentBranch *_debugExperimentBranch;
    NSString *_offlineAbJson;
    NSString *_querySubstring;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _placeRequestType;
    int _serviceType;
    struct { unsigned char has_placeRequestType : 1; unsigned char has_serviceType : 1; unsigned char read_unknownFields : 1; unsigned char read_debugExperimentBranch : 1; unsigned char read_offlineAbJson : 1; unsigned char read_querySubstring : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasServiceType;
@property (nonatomic) int serviceType;
@property (nonatomic) BOOL hasPlaceRequestType;
@property (nonatomic) int placeRequestType;
@property (readonly, nonatomic) BOOL hasQuerySubstring;
@property (retain, nonatomic) NSString *querySubstring;
@property (readonly, nonatomic) BOOL hasDebugExperimentBranch;
@property (retain, nonatomic) GEOABDebugPanelExperimentBranch *debugExperimentBranch;
@property (readonly, nonatomic) BOOL hasOfflineAbJson;
@property (retain, nonatomic) NSString *offlineAbJson;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (int)StringAsPlaceRequestType:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)placeRequestTypeAsString:(int)a0;
- (void)writeTo:(id)a0;
- (int)StringAsServiceType:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void)clearUnknownFields:(BOOL)a0;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)serviceTypeAsString:(int)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;

@end
