@class NSArray;

@interface CLFPhotosSettings : CLFBaseSettings

@property (class, readonly, nonatomic) CLFPhotosSettings *sharedInstance;

@property (nonatomic) BOOL includeSharedAlbums;
@property (retain, nonatomic) NSArray *selectedSharedAlbums;

+ (id)domainName;
+ (id)allPreferenceSelectorsAsStrings;

- (id)init;

@end
