@class NSString, NSMutableArray;

@interface BMPBNotificationEvent : PBCodable <NSCopying> {
    struct { unsigned char absoluteTimestamp : 1; unsigned char badge : 1; unsigned char usageType : 1; unsigned char isGroupMessage : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasUniqueID;
@property (retain, nonatomic) NSString *uniqueID;
@property (nonatomic) BOOL hasAbsoluteTimestamp;
@property (nonatomic) double absoluteTimestamp;
@property (nonatomic) BOOL hasUsageType;
@property (nonatomic) int usageType;
@property (readonly, nonatomic) BOOL hasBundleID;
@property (retain, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) BOOL hasNotificationID;
@property (retain, nonatomic) NSString *notificationID;
@property (readonly, nonatomic) BOOL hasDeviceID;
@property (retain, nonatomic) NSString *deviceID;
@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL hasSubtitle;
@property (retain, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) BOOL hasBody;
@property (retain, nonatomic) NSString *body;
@property (nonatomic) BOOL hasBadge;
@property (nonatomic) unsigned long long badge;
@property (readonly, nonatomic) BOOL hasThreadID;
@property (retain, nonatomic) NSString *threadID;
@property (readonly, nonatomic) BOOL hasCategoryID;
@property (retain, nonatomic) NSString *categoryID;
@property (readonly, nonatomic) BOOL hasSectionID;
@property (retain, nonatomic) NSString *sectionID;
@property (retain, nonatomic) NSMutableArray *contactIDs;
@property (nonatomic) BOOL hasIsGroupMessage;
@property (nonatomic) BOOL isGroupMessage;

+ (Class)contactIDsType;

- (unsigned long long)hash;
- (void)clearContactIDs;
- (BOOL)readFrom:(id)a0;
- (id)usageTypeAsString:(int)a0;
- (void)writeTo:(id)a0;
- (void)addContactIDs:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)contactIDsAtIndex:(unsigned long long)a0;
- (unsigned long long)contactIDsCount;
- (void)mergeFrom:(id)a0;
- (int)StringAsUsageType:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
