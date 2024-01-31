@class NSString, NSData;

@interface NPKProtoSetCommutePlanReminderForCommutePlanAndPassRequest : PBRequest <NSCopying> {
    struct { unsigned char reminderInterval : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasUniqueID;
@property (retain, nonatomic) NSString *uniqueID;
@property (readonly, nonatomic) BOOL hasCommutePlanBytes;
@property (retain, nonatomic) NSData *commutePlanBytes;
@property (nonatomic) BOOL hasReminderInterval;
@property (nonatomic) double reminderInterval;

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
