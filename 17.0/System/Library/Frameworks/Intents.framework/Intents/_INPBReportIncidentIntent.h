@class _INPBLocation, NSString, _INPBSupportedTrafficIncidentType, _INPBIntentMetadata, _INPBString;

@interface _INPBReportIncidentIntent : PBCodable <_INPBReportIncidentIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char isClear : 1; unsigned char startTime : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBString *additionalDetails;
@property (readonly, nonatomic) BOOL hasAdditionalDetails;
@property (retain, nonatomic) _INPBSupportedTrafficIncidentType *incidentType;
@property (readonly, nonatomic) BOOL hasIncidentType;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (nonatomic) BOOL isClear;
@property (nonatomic) BOOL hasIsClear;
@property (nonatomic) double startTime;
@property (nonatomic) BOOL hasStartTime;
@property (retain, nonatomic) _INPBLocation *userLocation;
@property (readonly, nonatomic) BOOL hasUserLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)readFrom:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
