@class NSString, NSData;

@interface IMSharedUtilitiesProtoCloudKitEncryptedMessage : PBCodable <NSCopying> {
    struct { unsigned char associatedMessageType : 1; unsigned char expireState : 1; unsigned char timeDelivered : 1; unsigned char timeExpressiveSentPlayed : 1; unsigned char timePlayed : 1; unsigned char timeRead : 1; unsigned char associatedMessageRangeLength : 1; unsigned char associatedMessageRangeLocation : 1; unsigned char version : 1; } _has;
}

@property (nonatomic) BOOL hasVersion;
@property (nonatomic) unsigned int version;
@property (readonly, nonatomic) BOOL hasMessageSubject;
@property (retain, nonatomic) NSString *messageSubject;
@property (readonly, nonatomic) BOOL hasMessageBody;
@property (retain, nonatomic) NSString *messageBody;
@property (readonly, nonatomic) BOOL hasMessageBodyData;
@property (retain, nonatomic) NSData *messageBodyData;
@property (readonly, nonatomic) BOOL hasBaloonBundleId;
@property (retain, nonatomic) NSString *baloonBundleId;
@property (readonly, nonatomic) BOOL hasPayloadData;
@property (retain, nonatomic) NSData *payloadData;
@property (readonly, nonatomic) BOOL hasMessageSummaryInfo;
@property (retain, nonatomic) NSData *messageSummaryInfo;
@property (readonly, nonatomic) BOOL hasExpressiveSendId;
@property (retain, nonatomic) NSString *expressiveSendId;
@property (nonatomic) BOOL hasTimeRead;
@property (nonatomic) unsigned long long timeRead;
@property (nonatomic) BOOL hasTimePlayed;
@property (nonatomic) unsigned long long timePlayed;
@property (nonatomic) BOOL hasTimeExpressiveSentPlayed;
@property (nonatomic) unsigned long long timeExpressiveSentPlayed;
@property (readonly, nonatomic) BOOL hasPadding;
@property (retain, nonatomic) NSData *padding;
@property (nonatomic) BOOL hasTimeDelivered;
@property (nonatomic) unsigned long long timeDelivered;
@property (nonatomic) BOOL hasExpireState;
@property (nonatomic) unsigned long long expireState;
@property (nonatomic) BOOL hasAssociatedMessageType;
@property (nonatomic) long long associatedMessageType;
@property (readonly, nonatomic) BOOL hasAssociatedMessageGuid;
@property (retain, nonatomic) NSString *associatedMessageGuid;
@property (nonatomic) BOOL hasAssociatedMessageRangeLocation;
@property (nonatomic) unsigned int associatedMessageRangeLocation;
@property (nonatomic) BOOL hasAssociatedMessageRangeLength;
@property (nonatomic) unsigned int associatedMessageRangeLength;

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
