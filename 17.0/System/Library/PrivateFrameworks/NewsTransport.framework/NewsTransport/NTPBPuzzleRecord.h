@class NSString, NTPBRecordBase, NTPBDate, NSMutableArray;

@interface NTPBPuzzleRecord : PBCodable <NSCopying> {
    struct { unsigned char behaviorFlags : 1; unsigned char difficultyLevel : 1; unsigned char minimumNewsVersion : 1; unsigned char isDeprecated : 1; unsigned char isDraft : 1; unsigned char isPaid : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasBase;
@property (retain, nonatomic) NTPBRecordBase *base;
@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL hasPuzzleDescription;
@property (retain, nonatomic) NSString *puzzleDescription;
@property (readonly, nonatomic) BOOL hasPuzzleTypeId;
@property (retain, nonatomic) NSString *puzzleTypeId;
@property (readonly, nonatomic) BOOL hasDataResourceId;
@property (retain, nonatomic) NSString *dataResourceId;
@property (retain, nonatomic) NSMutableArray *authors;
@property (nonatomic) BOOL hasIsPaid;
@property (nonatomic) BOOL isPaid;
@property (readonly, nonatomic) BOOL hasPublishedDate;
@property (retain, nonatomic) NTPBDate *publishedDate;
@property (nonatomic) BOOL hasDifficultyLevel;
@property (nonatomic) long long difficultyLevel;
@property (readonly, nonatomic) BOOL hasThumbnailImageCompactURL;
@property (retain, nonatomic) NSString *thumbnailImageCompactURL;
@property (readonly, nonatomic) BOOL hasThumbnailImageLargeURL;
@property (retain, nonatomic) NSString *thumbnailImageLargeURL;
@property (readonly, nonatomic) BOOL hasLanguage;
@property (retain, nonatomic) NSString *language;
@property (retain, nonatomic) NSMutableArray *blockedStorefrontIDs;
@property (retain, nonatomic) NSMutableArray *allowedStorefrontIDs;
@property (nonatomic) BOOL hasMinimumNewsVersion;
@property (nonatomic) long long minimumNewsVersion;
@property (readonly, nonatomic) BOOL hasTeaserConfiguration;
@property (retain, nonatomic) NSString *teaserConfiguration;
@property (readonly, nonatomic) BOOL hasSubtitle;
@property (retain, nonatomic) NSString *subtitle;
@property (nonatomic) BOOL hasBehaviorFlags;
@property (nonatomic) long long behaviorFlags;
@property (nonatomic) BOOL hasIsDeprecated;
@property (nonatomic) BOOL isDeprecated;
@property (nonatomic) BOOL hasIsDraft;
@property (nonatomic) BOOL isDraft;

+ (Class)blockedStorefrontIDsType;
+ (Class)authorsType;
+ (Class)allowedStorefrontIDsType;

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)authorsAtIndex:(unsigned long long)a0;
- (void)addAllowedStorefrontIDs:(id)a0;
- (void)addAuthors:(id)a0;
- (void)addBlockedStorefrontIDs:(id)a0;
- (id)allowedStorefrontIDsAtIndex:(unsigned long long)a0;
- (unsigned long long)allowedStorefrontIDsCount;
- (unsigned long long)authorsCount;
- (id)blockedStorefrontIDsAtIndex:(unsigned long long)a0;
- (unsigned long long)blockedStorefrontIDsCount;
- (void)clearAllowedStorefrontIDs;
- (void)clearAuthors;
- (void)clearBlockedStorefrontIDs;

@end
