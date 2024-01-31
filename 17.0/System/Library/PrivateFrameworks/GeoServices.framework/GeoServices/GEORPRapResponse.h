@class GEORPRapNotification, NSString, GEORPUserFormDetails, PBUnknownFields, PBDataReader, GEORPDisplayDetails;

@interface GEORPRapResponse : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEORPDisplayDetails *_displayDetails;
    GEORPRapNotification *_notification;
    NSString *_responseId;
    GEORPUserFormDetails *_userFormDetails;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _rapStateIcon;
    struct { unsigned char has_rapStateIcon : 1; unsigned char read_unknownFields : 1; unsigned char read_displayDetails : 1; unsigned char read_notification : 1; unsigned char read_responseId : 1; unsigned char read_userFormDetails : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasResponseId;
@property (retain, nonatomic) NSString *responseId;
@property (nonatomic) BOOL hasRapStateIcon;
@property (nonatomic) int rapStateIcon;
@property (readonly, nonatomic) BOOL hasNotification;
@property (retain, nonatomic) GEORPRapNotification *notification;
@property (readonly, nonatomic) BOOL hasDisplayDetails;
@property (retain, nonatomic) GEORPDisplayDetails *displayDetails;
@property (readonly, nonatomic) BOOL hasUserFormDetails;
@property (retain, nonatomic) GEORPUserFormDetails *userFormDetails;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithData:(id)a0;
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
- (int)StringAsRapStateIcon:(id)a0;
- (id)rapStateIconAsString:(int)a0;

@end
