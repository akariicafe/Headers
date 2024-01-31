@class _INPBWorkoutCustomization, NSArray, NSString, _INPBDataString, _INPBDouble, _INPBIntentMetadata;

@interface _INPBStartWorkoutIntent : PBCodable <_INPBStartWorkoutIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char isBuiltInWorkoutType : 1; unsigned char isOpenEnded : 1; unsigned char isVoiceOnly : 1; unsigned char sequenceLabel : 1; unsigned char workoutGoalUnitType : 1; unsigned char workoutLocationType : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *associatedItems;
@property (readonly, nonatomic) unsigned long long associatedItemsCount;
@property (retain, nonatomic) _INPBWorkoutCustomization *customization;
@property (readonly, nonatomic) BOOL hasCustomization;
@property (retain, nonatomic) _INPBDouble *goalValue;
@property (readonly, nonatomic) BOOL hasGoalValue;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (nonatomic) BOOL isBuiltInWorkoutType;
@property (nonatomic) BOOL hasIsBuiltInWorkoutType;
@property (nonatomic) BOOL isOpenEnded;
@property (nonatomic) BOOL hasIsOpenEnded;
@property (nonatomic) BOOL isVoiceOnly;
@property (nonatomic) BOOL hasIsVoiceOnly;
@property (nonatomic) int sequenceLabel;
@property (nonatomic) BOOL hasSequenceLabel;
@property (nonatomic) int workoutGoalUnitType;
@property (nonatomic) BOOL hasWorkoutGoalUnitType;
@property (nonatomic) int workoutLocationType;
@property (nonatomic) BOOL hasWorkoutLocationType;
@property (retain, nonatomic) _INPBDataString *workoutName;
@property (readonly, nonatomic) BOOL hasWorkoutName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)associatedItemsType;

- (BOOL)readFrom:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsWorkoutLocationType:(id)a0;
- (int)StringAsSequenceLabel:(id)a0;
- (int)StringAsWorkoutGoalUnitType:(id)a0;
- (void)addAssociatedItems:(id)a0;
- (id)associatedItemsAtIndex:(unsigned long long)a0;
- (void)clearAssociatedItems;
- (id)sequenceLabelAsString:(int)a0;
- (id)workoutGoalUnitTypeAsString:(int)a0;
- (id)workoutLocationTypeAsString:(int)a0;

@end
