@class NSArray;

@interface CLFMusicSettings : CLFBaseSettings

@property (class, readonly, nonatomic) CLFMusicSettings *sharedInstance;

@property (retain, nonatomic) NSArray *selectedPlaylists;

+ (id)domainName;
+ (id)allPreferenceSelectorsAsStrings;

- (id)init;

@end
