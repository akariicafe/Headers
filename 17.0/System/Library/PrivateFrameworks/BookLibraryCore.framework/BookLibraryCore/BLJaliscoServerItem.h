@class NSString, NSDictionary, BLJaliscoServerDatabase, NSDate, NSNumber, NSSet;

@interface BLJaliscoServerItem : NSManagedObject

@property (retain, nonatomic) NSString *storeID;
@property (retain, nonatomic) NSString *artist;
@property (retain, nonatomic) NSString *artworkTokenCode;
@property (retain, nonatomic) NSString *artworkURLString;
@property (retain, nonatomic) NSString *cloudID;
@property (retain, nonatomic) NSString *genre;
@property (retain, nonatomic) NSNumber *isHidden;
@property (retain, nonatomic) NSDate *purchasedAt;
@property (retain, nonatomic) NSString *purchasedTokenCode;
@property (retain, nonatomic) NSNumber *purchaseHistoryID;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSNumber *isExplicit;
@property (retain, nonatomic) NSNumber *isDisabled;
@property (retain, nonatomic) NSDate *expectedDate;
@property (retain, nonatomic) NSString *sortedTitle;
@property (retain, nonatomic) NSString *sortedAuthor;
@property (retain, nonatomic) NSString *displayVersion;
@property (retain, nonatomic) NSString *storeDownloadParameters;
@property (retain, nonatomic) BLJaliscoServerDatabase *database;
@property (retain, nonatomic) NSString *fileExtension;
@property (retain, nonatomic) NSNumber *isPictureBook;
@property (retain, nonatomic) NSNumber *containsAudio;
@property (retain, nonatomic) NSNumber *isReadAloud;
@property (retain, nonatomic) NSNumber *isAudiobook;
@property (retain, nonatomic) NSString *chapterMetadataURLString;
@property (retain, nonatomic) NSString *hlsPlaylistURLString;
@property (retain, nonatomic) NSNumber *storeAccountID;
@property (retain, nonatomic) NSDictionary *additionalAudiobookInfo;
@property (retain, nonatomic) NSNumber *needsImport;
@property (retain, nonatomic) NSSet *booklets;

- (id)initIntoManagedObjectContext:(id)a0;

@end
