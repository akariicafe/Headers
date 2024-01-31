@class NSArray, NSString;

@interface _INPBSnoozeTasksIntentResponse : PBCodable <_INPBSnoozeTasksIntentResponse, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *snoozedTasks;
@property (readonly, nonatomic) unsigned long long snoozedTasksCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)snoozedTasksType;

- (BOOL)readFrom:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addSnoozedTasks:(id)a0;
- (void)clearSnoozedTasks;
- (id)snoozedTasksAtIndex:(unsigned long long)a0;

@end
