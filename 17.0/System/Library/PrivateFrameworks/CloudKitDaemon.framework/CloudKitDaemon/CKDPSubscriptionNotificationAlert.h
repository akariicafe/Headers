@class NSString, NSMutableArray;

@interface CKDPSubscriptionNotificationAlert : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasText;
@property (retain, nonatomic) NSString *text;
@property (readonly, nonatomic) BOOL hasLocalizedKey;
@property (retain, nonatomic) NSString *localizedKey;
@property (retain, nonatomic) NSMutableArray *localizedArguments;
@property (readonly, nonatomic) BOOL hasActionLocKey;
@property (retain, nonatomic) NSString *actionLocKey;
@property (readonly, nonatomic) BOOL hasLaunchImage;
@property (retain, nonatomic) NSString *launchImage;
@property (readonly, nonatomic) BOOL hasSoundName;
@property (retain, nonatomic) NSString *soundName;
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

+ (Class)localizedArgumentsType;
+ (Class)subtitleLocalizedArgumentsType;
+ (Class)titleLocalizedArgumentsType;

- (unsigned long long)titleLocalizedArgumentsCount;
- (id)localizedArgumentsAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)addSubtitleLocalizedArguments:(id)a0;
- (unsigned long long)localizedArgumentsCount;
- (void)writeTo:(id)a0;
- (void)clearTitleLocalizedArguments;
- (id)description;
- (id)titleLocalizedArgumentsAtIndex:(unsigned long long)a0;
- (void)addTitleLocalizedArguments:(id)a0;
- (void)clearSubtitleLocalizedArguments;
- (void)addLocalizedArguments:(id)a0;
- (id)subtitleLocalizedArgumentsAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (unsigned long long)subtitleLocalizedArgumentsCount;
- (void)copyTo:(id)a0;
- (void)clearLocalizedArguments;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
