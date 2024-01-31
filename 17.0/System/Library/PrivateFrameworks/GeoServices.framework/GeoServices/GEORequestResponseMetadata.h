@class GEOLogMsgEventServiceMetadata, PBUnknownFields, PBDataReader, GEOLogMsgStateUserSession, GEOLogMsgStateOffline;

@interface GEORequestResponseMetadata : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    double _collectionTime;
    GEOLogMsgEventServiceMetadata *_eventMetadata;
    GEOLogMsgStateOffline *_stateOffline;
    GEOLogMsgStateUserSession *_stateUserSession;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _sessionBatchIdBits;
    struct { unsigned char has_collectionTime : 1; unsigned char has_sessionBatchIdBits : 1; unsigned char read_unknownFields : 1; unsigned char read_eventMetadata : 1; unsigned char read_stateOffline : 1; unsigned char read_stateUserSession : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) GEOLogMsgEventServiceMetadata *eventMetadata;
@property (readonly, nonatomic) BOOL hasStateUserSession;
@property (retain, nonatomic) GEOLogMsgStateUserSession *stateUserSession;
@property (nonatomic) BOOL hasSessionBatchIdBits;
@property (nonatomic) unsigned int sessionBatchIdBits;
@property (nonatomic) BOOL hasCollectionTime;
@property (nonatomic) double collectionTime;
@property (readonly, nonatomic) BOOL hasStateOffline;
@property (retain, nonatomic) GEOLogMsgStateOffline *stateOffline;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
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

@end
