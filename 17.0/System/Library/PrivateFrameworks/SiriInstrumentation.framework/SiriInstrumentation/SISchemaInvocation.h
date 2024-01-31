@class SISchemaHardwareButtonInvocationContext, NSData, SISchemaViewContainer, SISchemaCarPlayInvocationContext, SISchemaVerticalLayoutCardSectionInvocationContext, SISchemaCardSectionKeyboardInvocationContext, SISchemaTVRemoteInvocationContext;

@interface SISchemaInvocation : SISchemaInstrumentationMessage {
    struct { unsigned char invocationAction : 1; unsigned char invocationSource : 1; unsigned char isDeviceLocked : 1; } _has;
}

@property (nonatomic) int invocationAction;
@property (nonatomic) BOOL hasInvocationAction;
@property (nonatomic) int invocationSource;
@property (nonatomic) BOOL hasInvocationSource;
@property (retain, nonatomic) SISchemaViewContainer *viewContainer;
@property (nonatomic) BOOL hasViewContainer;
@property (retain, nonatomic) SISchemaCarPlayInvocationContext *carPlayInvocationContext;
@property (nonatomic) BOOL hasCarPlayInvocationContext;
@property (retain, nonatomic) SISchemaVerticalLayoutCardSectionInvocationContext *cardInvocationContext;
@property (nonatomic) BOOL hasCardInvocationContext;
@property (retain, nonatomic) SISchemaTVRemoteInvocationContext *tvRemoteInvocationContext;
@property (nonatomic) BOOL hasTvRemoteInvocationContext;
@property (retain, nonatomic) SISchemaCardSectionKeyboardInvocationContext *keyboardInvocationContext;
@property (nonatomic) BOOL hasKeyboardInvocationContext;
@property (retain, nonatomic) SISchemaHardwareButtonInvocationContext *hardwareButtonInvocationContext;
@property (nonatomic) BOOL hasHardwareButtonInvocationContext;
@property (nonatomic) BOOL isDeviceLocked;
@property (nonatomic) BOOL hasIsDeviceLocked;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichInvocationcontext;

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
- (void)deleteTvRemoteInvocationContext;
- (void)deleteKeyboardInvocationContext;
- (void)deleteCarPlayInvocationContext;
- (void)deleteCardInvocationContext;
- (void)deleteHardwareButtonInvocationContext;
- (void)deleteInvocationAction;
- (void)deleteInvocationSource;
- (void)deleteIsDeviceLocked;
- (void)deleteViewContainer;

@end
