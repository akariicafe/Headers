@class NSString, NSData, NSMutableArray;

@interface CKDPNotificationSyncResponsePushMessage : PBCodable <NSCopying> {
    struct { unsigned char badgeCount : 1; unsigned char source : 1; unsigned char isRead : 1; } _has;
}

@property (nonatomic) BOOL hasIsRead;
@property (nonatomic) BOOL isRead;
@property (readonly, nonatomic) BOOL hasUuid;
@property (retain, nonatomic) NSString *uuid;
@property (nonatomic) BOOL hasSource;
@property (nonatomic) int source;
@property (readonly, nonatomic) BOOL hasDialog;
@property (retain, nonatomic) NSString *dialog;
@property (readonly, nonatomic) BOOL hasSound;
@property (retain, nonatomic) NSString *sound;
@property (nonatomic) BOOL hasBadgeCount;
@property (nonatomic) int badgeCount;
@property (readonly, nonatomic) BOOL hasPayload;
@property (retain, nonatomic) NSData *payload;
@property (readonly, nonatomic) BOOL hasCategory;
@property (retain, nonatomic) NSString *category;
@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL hasTitleLocalizedKey;
@property (retain, nonatomic) NSString *titleLocalizedKey;
@property (retain, nonatomic) NSMutableArray *titleLocalizedArguments;
@property (readonly, nonatomic) BOOL hasSubtitle;
@property (retain, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) BOOL hasSubtitleLocalizedKey;
@property (retain, nonatomic) NSString *subtitleLocalizedKey;
@property (retain, nonatomic) NSMutableArray *subtitleLocalizedArguments;

+ (Class)subtitleLocalizedArgumentsType;
+ (Class)titleLocalizedArgumentsType;

- (int)StringAsSource:(id)a0;
- (unsigned long long)titleLocalizedArgumentsCount;
- (id)sourceAsString:(int)a0;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)addSubtitleLocalizedArguments:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearTitleLocalizedArguments;
- (id)description;
- (id)titleLocalizedArgumentsAtIndex:(unsigned long long)a0;
- (void)addTitleLocalizedArguments:(id)a0;
- (void)clearSubtitleLocalizedArguments;
- (id)subtitleLocalizedArgumentsAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (unsigned long long)subtitleLocalizedArgumentsCount;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
