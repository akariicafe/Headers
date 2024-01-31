@class NSArray, FLOWSchemaFLOWPhoneCallEmergencyContext, NSData;

@interface FLOWSchemaFLOWPhoneCallContext : SISchemaInstrumentationMessage {
    struct { unsigned char phoneCallType : 1; unsigned char phoneCallAppType : 1; unsigned char isThirdPartyFaceTime : 1; unsigned char searchCallHistoryIntent : 1; unsigned char userPersona : 1; } _has;
}

@property (nonatomic) int phoneCallType;
@property (nonatomic) BOOL hasPhoneCallType;
@property (copy, nonatomic) NSArray *recipientTypes;
@property (nonatomic) int phoneCallAppType;
@property (nonatomic) BOOL hasPhoneCallAppType;
@property (retain, nonatomic) FLOWSchemaFLOWPhoneCallEmergencyContext *emergencyContext;
@property (nonatomic) BOOL hasEmergencyContext;
@property (copy, nonatomic) NSArray *personTypes;
@property (nonatomic) BOOL isThirdPartyFaceTime;
@property (nonatomic) BOOL hasIsThirdPartyFaceTime;
@property (nonatomic) int searchCallHistoryIntent;
@property (nonatomic) BOOL hasSearchCallHistoryIntent;
@property (nonatomic) int userPersona;
@property (nonatomic) BOOL hasUserPersona;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)clearPersonType;
- (unsigned long long)personTypeCount;
- (void)addPersonType:(int)a0;
- (void)addRecipientType:(int)a0;
- (void)clearRecipientType;
- (void)deleteEmergencyContext;
- (void)deleteIsThirdPartyFaceTime;
- (void)deletePersonType;
- (void)deletePhoneCallAppType;
- (void)deletePhoneCallType;
- (void)deleteRecipientType;
- (void)deleteSearchCallHistoryIntent;
- (void)deleteUserPersona;
- (int)personTypeAtIndex:(unsigned long long)a0;
- (int)recipientTypeAtIndex:(unsigned long long)a0;
- (unsigned long long)recipientTypeCount;

@end
