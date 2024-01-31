@class PBDataReader, NSString, GEORPTimestamp, PBUnknownFields;

@interface GEORPFeedbackOverview : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEORPTimestamp *_createdAt;
    GEORPTimestamp *_lastUpdatedAt;
    NSString *_stateDescription;
    NSString *_title;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _feedbackState;
    int _type;
    struct { unsigned char has_feedbackState : 1; unsigned char has_type : 1; unsigned char read_unknownFields : 1; unsigned char read_createdAt : 1; unsigned char read_lastUpdatedAt : 1; unsigned char read_stateDescription : 1; unsigned char read_title : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL hasCreatedAt;
@property (retain, nonatomic) GEORPTimestamp *createdAt;
@property (readonly, nonatomic) BOOL hasLastUpdatedAt;
@property (retain, nonatomic) GEORPTimestamp *lastUpdatedAt;
@property (nonatomic) BOOL hasFeedbackState;
@property (nonatomic) int feedbackState;
@property (readonly, nonatomic) BOOL hasStateDescription;
@property (retain, nonatomic) NSString *stateDescription;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (id)typeAsString:(int)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void)clearUnknownFields:(BOOL)a0;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (int)StringAsType:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;
- (int)StringAsFeedbackState:(id)a0;
- (id)feedbackStateAsString:(int)a0;

@end
