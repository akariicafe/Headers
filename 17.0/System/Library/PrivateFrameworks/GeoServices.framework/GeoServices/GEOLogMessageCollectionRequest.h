@class NSMutableArray;

@interface GEOLogMessageCollectionRequest : PBRequest <NSCopying> {
    NSMutableArray *_logMessages;
}

@property (retain, nonatomic) NSMutableArray *logMessages;

+ (BOOL)isValid:(id)a0;
+ (Class)logMessageType;

- (unsigned long long)hash;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (void)addLogMessage:(id)a0;
- (unsigned long long)logMessagesCount;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (id)logMessageAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)clearLogMessages;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;

@end
