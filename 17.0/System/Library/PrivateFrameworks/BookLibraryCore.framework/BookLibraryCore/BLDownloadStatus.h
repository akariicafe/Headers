@class NSNumber, NSString, NSDate;

@interface BLDownloadStatus : NSObject <NSCopying>

@property (retain, nonatomic) NSNumber *storeID;
@property (retain, nonatomic) NSNumber *storePlaylistID;
@property (copy, nonatomic) NSString *permLink;
@property (copy, nonatomic) NSString *downloadID;
@property (retain, nonatomic) NSNumber *percentComplete;
@property (retain, nonatomic) NSNumber *estimatedTimeRemaining;
@property (retain, nonatomic) NSNumber *transferBytesWritten;
@property (retain, nonatomic) NSNumber *transferBytesExpected;
@property (nonatomic) long long downloadPhase;
@property (nonatomic) BOOL isAudiobook;
@property (nonatomic) BOOL isRestore;
@property (nonatomic) BOOL canPause;
@property (nonatomic) BOOL isSample;
@property (nonatomic) BOOL isPurchase;
@property (retain, nonatomic) NSDate *purchaseDate;
@property (nonatomic) long long persistentIdentifier;
@property (retain, nonatomic) NSNumber *storeAccountIdentifier;
@property (copy, nonatomic) NSString *artistName;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *collectionArtistName;
@property (copy, nonatomic) NSString *collectionTitle;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *genre;
@property (copy, nonatomic) NSString *thumbnailImageURL;
@property (copy, nonatomic) NSString *assetKind;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
