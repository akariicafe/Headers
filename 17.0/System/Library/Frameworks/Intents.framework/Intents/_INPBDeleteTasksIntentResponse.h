@class NSArray, NSString;

@interface _INPBDeleteTasksIntentResponse : PBCodable <_INPBDeleteTasksIntentResponse, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *deletedTasks;
@property (readonly, nonatomic) unsigned long long deletedTasksCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)deletedTasksType;

- (BOOL)readFrom:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addDeletedTasks:(id)a0;
- (void)clearDeletedTasks;
- (id)deletedTasksAtIndex:(unsigned long long)a0;

@end
