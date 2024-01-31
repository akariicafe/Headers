@class NSString;

@interface BMPBRemindersContentEvent : PBCodable <NSCopying> {
    struct { unsigned char absoluteTimestamp : 1; unsigned char completionDateTimestamp : 1; unsigned char dueDateTimestamp : 1; unsigned char priority : 1; unsigned char isAllDay : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasUniqueId;
@property (retain, nonatomic) NSString *uniqueId;
@property (readonly, nonatomic) BOOL hasDomainId;
@property (retain, nonatomic) NSString *domainId;
@property (nonatomic) BOOL hasAbsoluteTimestamp;
@property (nonatomic) double absoluteTimestamp;
@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL hasNotes;
@property (retain, nonatomic) NSString *notes;
@property (nonatomic) BOOL hasIsAllDay;
@property (nonatomic) BOOL isAllDay;
@property (nonatomic) BOOL hasCompletionDateTimestamp;
@property (nonatomic) double completionDateTimestamp;
@property (nonatomic) BOOL hasDueDateTimestamp;
@property (nonatomic) double dueDateTimestamp;
@property (nonatomic) BOOL hasPriority;
@property (nonatomic) int priority;
@property (readonly, nonatomic) BOOL hasContentProtection;
@property (retain, nonatomic) NSString *contentProtection;
@property (readonly, nonatomic) BOOL hasPersonaId;
@property (retain, nonatomic) NSString *personaId;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
