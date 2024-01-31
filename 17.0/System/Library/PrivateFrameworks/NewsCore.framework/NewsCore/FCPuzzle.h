@class NSString, NSArray, FCPuzzleThumbnailHandle, FCInterestToken, NSDate, FCAssetHandle;
@protocol FCPuzzleTypeProviding;

@interface FCPuzzle : NSObject <FCPuzzleProviding>

@property (readonly, nonatomic) FCInterestToken *interestToken;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSString *puzzleDescription;
@property (readonly, retain, nonatomic) id<FCPuzzleTypeProviding> puzzleType;
@property (readonly, copy, nonatomic) NSString *dataResourceID;
@property (readonly, copy, nonatomic) NSArray *authors;
@property (readonly, copy, nonatomic) NSDate *publishDate;
@property (readonly, copy, nonatomic) NSString *publishDateString;
@property (readonly, nonatomic, getter=isPaid) BOOL paid;
@property (readonly, nonatomic) long long difficulty;
@property (readonly, copy, nonatomic) NSString *difficultyDescription;
@property (readonly, nonatomic) FCPuzzleThumbnailHandle *thumbnailSmallImageAssetHandle;
@property (readonly, nonatomic) FCAssetHandle *thumbnailLargeImageAssetHandle;
@property (readonly, nonatomic) NSDate *loadDate;
@property (readonly, nonatomic, getter=isDeprecated) BOOL deprecated;
@property (readonly, nonatomic, getter=isDraft) BOOL draft;
@property (readonly, nonatomic) NSString *teaserClue;
@property (readonly, nonatomic) NSString *teaserAnswer;
@property (readonly, nonatomic) NSString *teaserInfo;
@property (readonly, nonatomic) NSString *teaserDirection;
@property (readonly, nonatomic) NSString *teaserNumber;
@property (readonly, copy, nonatomic) NSString *language;
@property (readonly, copy, nonatomic) NSArray *blockedStorefrontIDs;
@property (readonly, copy, nonatomic) NSArray *allowedStorefrontIDs;
@property (readonly, nonatomic) long long minimumNewsVersion;
@property (readonly, nonatomic) BOOL showInfoModalOnFirstPlay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0 title:(id)a1 subtitle:(id)a2 puzzleDescription:(id)a3 puzzleType:(id)a4 dataResourceID:(id)a5 authors:(id)a6 publishDate:(id)a7 isPaid:(BOOL)a8 difficulty:(long long)a9 difficultyDescription:(id)a10 thumbnailLargeImageAssetHandle:(id)a11 loadDate:(id)a12 teaserClue:(id)a13 teaserAnswer:(id)a14 teaserInfo:(id)a15 teaserDirection:(id)a16 teaserNumber:(id)a17 language:(id)a18 blockedStorefrontIDs:(id)a19 allowedStorefrontIDs:(id)a20 minimumNewsVersion:(long long)a21 showInfoModalOnFirstPlay:(BOOL)a22 isDeprecated:(BOOL)a23 isDraft:(BOOL)a24;
- (id)initWithPuzzle:(id)a0 overrides:(id)a1;
- (id)initWithPuzzleRecord:(id)a0 puzzleType:(id)a1 assetManager:(id)a2 interestToken:(id)a3 difficultyDescriptions:(id)a4;

@end
