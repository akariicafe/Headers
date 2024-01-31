@class NSString, NSMutableArray;

@interface ATXPBModeConfigurationUIFlowLoggingEvent : PBCodable <ATXJSONSerializableProtocol, NSCopying> {
    struct { unsigned char secondsSinceReferenceDate : 1; unsigned char modeConfigurationEntityType : 1; unsigned char modeConfigurationType : 1; unsigned char modeConfigurationUI : 1; } _has;
}

@property (nonatomic) BOOL hasSecondsSinceReferenceDate;
@property (nonatomic) double secondsSinceReferenceDate;
@property (readonly, nonatomic) BOOL hasDndModeUUID;
@property (retain, nonatomic) NSString *dndModeUUID;
@property (nonatomic) BOOL hasModeConfigurationUI;
@property (nonatomic) int modeConfigurationUI;
@property (nonatomic) BOOL hasModeConfigurationEntityType;
@property (nonatomic) int modeConfigurationEntityType;
@property (retain, nonatomic) NSMutableArray *previousEntityIdentifiers;
@property (retain, nonatomic) NSMutableArray *suggestedEntityIdentifiers;
@property (retain, nonatomic) NSMutableArray *currentEntityIdentifiers;
@property (nonatomic) BOOL hasModeConfigurationType;
@property (nonatomic) int modeConfigurationType;
@property (retain, nonatomic) NSMutableArray *candidateEntityIdentifiers;

+ (Class)candidateEntityIdentifiersType;
+ (Class)currentEntityIdentifiersType;
+ (Class)previousEntityIdentifiersType;
+ (Class)suggestedEntityIdentifiersType;

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
- (int)StringAsModeConfigurationType:(id)a0;
- (unsigned long long)candidateEntityIdentifiersCount;
- (void)clearCandidateEntityIdentifiers;
- (int)StringAsModeConfigurationEntityType:(id)a0;
- (int)StringAsModeConfigurationUI:(id)a0;
- (void)clearSuggestedEntityIdentifiers;
- (unsigned long long)suggestedEntityIdentifiersCount;
- (void)addCandidateEntityIdentifiers:(id)a0;
- (void)addCurrentEntityIdentifiers:(id)a0;
- (void)addPreviousEntityIdentifiers:(id)a0;
- (void)addSuggestedEntityIdentifiers:(id)a0;
- (id)candidateEntityIdentifiersAtIndex:(unsigned long long)a0;
- (void)clearCurrentEntityIdentifiers;
- (void)clearPreviousEntityIdentifiers;
- (id)currentEntityIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)currentEntityIdentifiersCount;
- (id)modeConfigurationEntityTypeAsString:(int)a0;
- (id)modeConfigurationTypeAsString:(int)a0;
- (id)modeConfigurationUIAsString:(int)a0;
- (id)previousEntityIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)previousEntityIdentifiersCount;
- (id)suggestedEntityIdentifiersAtIndex:(unsigned long long)a0;

@end
