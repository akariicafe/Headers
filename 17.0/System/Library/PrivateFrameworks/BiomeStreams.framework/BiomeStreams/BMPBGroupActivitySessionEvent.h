@class NSString, NSMutableArray;

@interface BMPBGroupActivitySessionEvent : PBCodable <NSCopying> {
    struct { unsigned char isActive : 1; } _has;
}

@property (nonatomic) BOOL hasIsActive;
@property (nonatomic) BOOL isActive;
@property (readonly, nonatomic) BOOL hasSourceBundleId;
@property (retain, nonatomic) NSString *sourceBundleId;
@property (readonly, nonatomic) BOOL hasActivitySessionId;
@property (retain, nonatomic) NSString *activitySessionId;
@property (readonly, nonatomic) BOOL hasActivityId;
@property (retain, nonatomic) NSString *activityId;
@property (readonly, nonatomic) BOOL hasMessagesChatGuid;
@property (retain, nonatomic) NSString *messagesChatGuid;
@property (readonly, nonatomic) BOOL hasExperienceType;
@property (retain, nonatomic) NSString *experienceType;
@property (retain, nonatomic) NSMutableArray *participantHandles;
@property (retain, nonatomic) NSMutableArray *memberHandles;

+ (Class)memberHandlesType;
+ (Class)participantHandlesType;

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
- (void)addMemberHandles:(id)a0;
- (void)addParticipantHandles:(id)a0;
- (void)clearMemberHandles;
- (void)clearParticipantHandles;
- (id)memberHandlesAtIndex:(unsigned long long)a0;
- (unsigned long long)memberHandlesCount;
- (id)participantHandlesAtIndex:(unsigned long long)a0;
- (unsigned long long)participantHandlesCount;

@end
