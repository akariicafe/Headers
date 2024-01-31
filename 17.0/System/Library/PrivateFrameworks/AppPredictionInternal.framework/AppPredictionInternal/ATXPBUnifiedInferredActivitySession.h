@class NSString;

@interface ATXPBUnifiedInferredActivitySession : PBCodable <ATXJSONSerializableProtocol, NSCopying> {
    struct { unsigned char confidence : 1; unsigned char endTime : 1; unsigned char inferredActivity : 1; unsigned char startTime : 1; } _has;
}

@property (nonatomic) BOOL hasStartTime;
@property (nonatomic) double startTime;
@property (nonatomic) BOOL hasEndTime;
@property (nonatomic) double endTime;
@property (nonatomic) BOOL hasInferredActivity;
@property (nonatomic) long long inferredActivity;
@property (readonly, nonatomic) BOOL hasSource;
@property (retain, nonatomic) NSString *source;
@property (nonatomic) BOOL hasConfidence;
@property (nonatomic) double confidence;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initFromJSON:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
