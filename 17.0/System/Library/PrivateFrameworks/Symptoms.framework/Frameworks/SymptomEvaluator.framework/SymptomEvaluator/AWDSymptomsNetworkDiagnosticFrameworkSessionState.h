@class NSString;

@interface AWDSymptomsNetworkDiagnosticFrameworkSessionState : PBCodable <NSCopying> {
    struct { unsigned char stateHeldForSecs : 1; unsigned char timestamp : 1; unsigned char inState : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasInState;
@property (nonatomic) int inState;
@property (nonatomic) BOOL hasStateHeldForSecs;
@property (nonatomic) unsigned long long stateHeldForSecs;
@property (readonly, nonatomic) BOOL hasSymptomName;
@property (retain, nonatomic) NSString *symptomName;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)inStateAsString:(int)a0;
- (int)StringAsInState:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
