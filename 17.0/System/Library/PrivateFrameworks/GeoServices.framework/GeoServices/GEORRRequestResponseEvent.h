@class NSString, NSData, PBDataReader;

@interface GEORRRequestResponseEvent : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSData *_encoded;
    NSString *_error;
    NSString *_eventId;
    unsigned long long _timestamp;
    NSString *_url;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _eventType;
    int _requestType;
    BOOL _withARPC;
    struct { unsigned char has_timestamp : 1; unsigned char has_eventType : 1; unsigned char has_requestType : 1; unsigned char has_withARPC : 1; unsigned char read_encoded : 1; unsigned char read_error : 1; unsigned char read_eventId : 1; unsigned char read_url : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasEventType;
@property (nonatomic) int eventType;
@property (nonatomic) BOOL hasRequestType;
@property (nonatomic) int requestType;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasEventId;
@property (retain, nonatomic) NSString *eventId;
@property (readonly, nonatomic) BOOL hasUrl;
@property (retain, nonatomic) NSString *url;
@property (nonatomic) BOOL hasWithARPC;
@property (nonatomic) BOOL withARPC;
@property (readonly, nonatomic) BOOL hasError;
@property (retain, nonatomic) NSString *error;
@property (readonly, nonatomic) BOOL hasEncoded;
@property (retain, nonatomic) NSData *encoded;

+ (BOOL)isValid:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)eventTypeAsString:(int)a0;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (id)requestTypeAsString:(int)a0;
- (int)StringAsRequestType:(id)a0;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (int)StringAsEventType:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;
- (id)decodeEvent;

@end
