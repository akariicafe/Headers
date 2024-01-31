@class NSNumber, NSArray, NSString, NSMutableArray, NSObject;
@protocol VUIDownloadEntityDelegate, VUIMediaEntityIdentifier;

@interface VUIDownloadEntity : NSObject <NSCopying>

@property (retain, nonatomic) NSMutableArray *assetControllers;
@property (weak, nonatomic) id<VUIDownloadEntityDelegate> delegate;
@property (nonatomic) long long downloadType;
@property (retain, nonatomic) NSObject<VUIMediaEntityIdentifier> *identifier;
@property (retain, nonatomic) NSObject<VUIMediaEntityIdentifier> *showIdentifier;
@property (retain, nonatomic) NSArray *mediaEntities;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSNumber *releaseYear;
@property (retain, nonatomic) NSNumber *duration;
@property (retain, nonatomic) NSNumber *episodeNumber;
@property (retain, nonatomic) NSNumber *fractionalEpisodeNumber;
@property (retain, nonatomic) NSNumber *numberOfMediaItems;
@property (retain, nonatomic) NSNumber *numberOfMediaItemsDownloading;

- (unsigned long long)hash;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_assetControllerStateDidChange:(id)a0;
- (void)_configureWithMediaEntities:(id)a0;
- (void)_removeDeletedMediaItemInShowPageIfNeeded;
- (id)initWithMediaEntities:(id)a0 withDownloadType:(long long)a1;
- (id)initWithMediaEntity:(id)a0 withDownloadType:(long long)a1;

@end
