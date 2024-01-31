@class NSString, HDCodableRoutineLocationRequest, HDCodableRoutineScenarioTriggeredRequest;

@interface HDCodableRoutineRequestMessage : PBCodable <NSCopying> {
    struct { unsigned char requestType : 1; } _has;
}

@property (nonatomic) BOOL hasRequestType;
@property (nonatomic) int requestType;
@property (readonly, nonatomic) BOOL hasRequestIdentifier;
@property (retain, nonatomic) NSString *requestIdentifier;
@property (readonly, nonatomic) BOOL hasFetchLocationRequest;
@property (retain, nonatomic) HDCodableRoutineLocationRequest *fetchLocationRequest;
@property (readonly, nonatomic) BOOL hasScenarioTriggeredRequest;
@property (retain, nonatomic) HDCodableRoutineScenarioTriggeredRequest *scenarioTriggeredRequest;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)requestTypeAsString:(int)a0;
- (int)StringAsRequestType:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
