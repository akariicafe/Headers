@class NSArray, NSString, NSData;

@interface FLOWSchemaFLOWHomeAutomationRequestMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char isHomeAutomationRequestAsynchronous : 1; unsigned char targetedEntityCount : 1; unsigned char fulfilledEntityCount : 1; unsigned char smallestTargetedContainer : 1; unsigned char conditionType : 1; unsigned char isRecurring : 1; unsigned char isIntentSelectionCacheHit : 1; } _has;
}

@property (nonatomic) BOOL isHomeAutomationRequestAsynchronous;
@property (nonatomic) BOOL hasIsHomeAutomationRequestAsynchronous;
@property (nonatomic) unsigned int targetedEntityCount;
@property (nonatomic) BOOL hasTargetedEntityCount;
@property (nonatomic) unsigned int fulfilledEntityCount;
@property (nonatomic) BOOL hasFulfilledEntityCount;
@property (copy, nonatomic) NSArray *targetedEntityTypes;
@property (nonatomic) int smallestTargetedContainer;
@property (nonatomic) BOOL hasSmallestTargetedContainer;
@property (copy, nonatomic) NSString *targetAttribute;
@property (nonatomic) BOOL hasTargetAttribute;
@property (nonatomic) int conditionType;
@property (nonatomic) BOOL hasConditionType;
@property (nonatomic) BOOL isRecurring;
@property (nonatomic) BOOL hasIsRecurring;
@property (nonatomic) BOOL isIntentSelectionCacheHit;
@property (nonatomic) BOOL hasIsIntentSelectionCacheHit;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsIntentSelectionCacheHit;
- (void)deleteSmallestTargetedContainer;
- (void)addTargetedEntityTypes:(id)a0;
- (void)clearTargetedEntityTypes;
- (void)deleteConditionType;
- (void)deleteFulfilledEntityCount;
- (void)deleteIsHomeAutomationRequestAsynchronous;
- (void)deleteIsRecurring;
- (void)deleteTargetAttribute;
- (void)deleteTargetedEntityCount;
- (void)deleteTargetedEntityTypes;
- (id)targetedEntityTypesAtIndex:(unsigned long long)a0;
- (unsigned long long)targetedEntityTypesCount;

@end
