@class NSString, _INPBContactEventTrigger, NSArray, _INPBIntent, _INPBTemporalEventTrigger, _INPBIntentMetadata, _INPBSpatialEventTrigger, _INPBTaskList;

@interface _INPBAddTasksIntent : PBCodable <_INPBAddTasksIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char priority : 1; unsigned char taskReference : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBContactEventTrigger *contactEventTrigger;
@property (readonly, nonatomic) BOOL hasContactEventTrigger;
@property (retain, nonatomic) _INPBIntent *intent;
@property (readonly, nonatomic) BOOL hasIntent;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (nonatomic) int priority;
@property (nonatomic) BOOL hasPriority;
@property (retain, nonatomic) _INPBSpatialEventTrigger *spatialEventTrigger;
@property (readonly, nonatomic) BOOL hasSpatialEventTrigger;
@property (retain, nonatomic) _INPBTaskList *targetTaskList;
@property (readonly, nonatomic) BOOL hasTargetTaskList;
@property (copy, nonatomic) NSArray *targetTaskListMembers;
@property (readonly, nonatomic) unsigned long long targetTaskListMembersCount;
@property (nonatomic) int taskReference;
@property (nonatomic) BOOL hasTaskReference;
@property (copy, nonatomic) NSArray *taskTitles;
@property (readonly, nonatomic) unsigned long long taskTitlesCount;
@property (retain, nonatomic) _INPBTemporalEventTrigger *temporalEventTrigger;
@property (readonly, nonatomic) BOOL hasTemporalEventTrigger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)targetTaskListMembersType;
+ (Class)taskTitlesType;

- (BOOL)readFrom:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsTaskReference:(id)a0;
- (int)StringAsPriority:(id)a0;
- (void)clearTaskTitles;
- (void)addTargetTaskListMembers:(id)a0;
- (void)addTaskTitles:(id)a0;
- (void)clearTargetTaskListMembers;
- (id)priorityAsString:(int)a0;
- (id)targetTaskListMembersAtIndex:(unsigned long long)a0;
- (id)taskReferenceAsString:(int)a0;
- (id)taskTitlesAtIndex:(unsigned long long)a0;

@end
