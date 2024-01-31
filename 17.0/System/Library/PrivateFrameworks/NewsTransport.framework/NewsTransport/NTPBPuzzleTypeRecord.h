@class NSString, NSMutableArray, NTPBRecordBase;

@interface NTPBPuzzleTypeRecord : PBCodable <NSCopying> {
    struct { unsigned char minimumNewsVersion : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasBase;
@property (retain, nonatomic) NTPBRecordBase *base;
@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL hasEngineResourceId;
@property (retain, nonatomic) NSString *engineResourceId;
@property (readonly, nonatomic) BOOL hasSuperfeedConfigResourceID;
@property (retain, nonatomic) NSString *superfeedConfigResourceID;
@property (retain, nonatomic) NSMutableArray *latestPuzzleIds;
@property (retain, nonatomic) NSMutableArray *promotedPuzzleIds;
@property (readonly, nonatomic) BOOL hasLanguage;
@property (retain, nonatomic) NSString *language;
@property (retain, nonatomic) NSMutableArray *blockedStorefrontIDs;
@property (retain, nonatomic) NSMutableArray *allowedStorefrontIDs;
@property (nonatomic) BOOL hasMinimumNewsVersion;
@property (nonatomic) long long minimumNewsVersion;
@property (readonly, nonatomic) BOOL hasNameImageURL;
@property (retain, nonatomic) NSString *nameImageURL;
@property (readonly, nonatomic) BOOL hasNameImageCompactURL;
@property (retain, nonatomic) NSString *nameImageCompactURL;
@property (readonly, nonatomic) BOOL hasNameImageForDarkBackgroundURL;
@property (retain, nonatomic) NSString *nameImageForDarkBackgroundURL;
@property (readonly, nonatomic) BOOL hasNameImageMaskURL;
@property (retain, nonatomic) NSString *nameImageMaskURL;
@property (readonly, nonatomic) BOOL hasCoverImageURL;
@property (retain, nonatomic) NSString *coverImageURL;
@property (readonly, nonatomic) BOOL hasFeedNavImageURL;
@property (retain, nonatomic) NSString *feedNavImageURL;
@property (readonly, nonatomic) BOOL hasExploreTileImageURL;
@property (retain, nonatomic) NSString *exploreTileImageURL;
@property (readonly, nonatomic) BOOL hasThemeConfiguration;
@property (retain, nonatomic) NSString *themeConfiguration;
@property (readonly, nonatomic) BOOL hasImagesResourceID;
@property (retain, nonatomic) NSString *imagesResourceID;
@property (readonly, nonatomic) BOOL hasNavigationChromeBackgroundImageURL;
@property (retain, nonatomic) NSString *navigationChromeBackgroundImageURL;
@property (readonly, nonatomic) BOOL hasNavigationChromeBackgroundImageCompactURL;
@property (retain, nonatomic) NSString *navigationChromeBackgroundImageCompactURL;
@property (readonly, nonatomic) BOOL hasNavigationChromeBackgroundImageLargeURL;
@property (retain, nonatomic) NSString *navigationChromeBackgroundImageLargeURL;
@property (readonly, nonatomic) BOOL hasNavigationChromeBackgroundDarkModeImageURL;
@property (retain, nonatomic) NSString *navigationChromeBackgroundDarkModeImageURL;
@property (readonly, nonatomic) BOOL hasNavigationChromeBackgroundDarkModeImageCompactURL;
@property (retain, nonatomic) NSString *navigationChromeBackgroundDarkModeImageCompactURL;
@property (readonly, nonatomic) BOOL hasNavigationChromeBackgroundDarkModeImageLargeURL;
@property (retain, nonatomic) NSString *navigationChromeBackgroundDarkModeImageLargeURL;

+ (Class)blockedStorefrontIDsType;
+ (Class)allowedStorefrontIDsType;
+ (Class)latestPuzzleIdsType;
+ (Class)promotedPuzzleIdsType;

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addAllowedStorefrontIDs:(id)a0;
- (void)addBlockedStorefrontIDs:(id)a0;
- (void)addLatestPuzzleIds:(id)a0;
- (void)addPromotedPuzzleIds:(id)a0;
- (id)allowedStorefrontIDsAtIndex:(unsigned long long)a0;
- (unsigned long long)allowedStorefrontIDsCount;
- (id)blockedStorefrontIDsAtIndex:(unsigned long long)a0;
- (unsigned long long)blockedStorefrontIDsCount;
- (void)clearAllowedStorefrontIDs;
- (void)clearBlockedStorefrontIDs;
- (void)clearLatestPuzzleIds;
- (void)clearPromotedPuzzleIds;
- (id)latestPuzzleIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)latestPuzzleIdsCount;
- (id)promotedPuzzleIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)promotedPuzzleIdsCount;

@end
