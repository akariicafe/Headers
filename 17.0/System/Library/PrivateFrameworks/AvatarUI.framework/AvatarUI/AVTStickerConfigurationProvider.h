@class NSCache, AVTUIEnvironment, NSArray;
@protocol AVTStickerPack;

@interface AVTStickerConfigurationProvider : NSObject

@property (retain, nonatomic) NSCache *stickerConfigurationCache;
@property (retain, nonatomic) AVTUIEnvironment *environment;
@property (retain, nonatomic) NSArray<AVTStickerPack> *stickerPacks;
@property (retain, nonatomic) NSArray *stickerConfigurationNames;

- (void).cxx_destruct;
- (id)availableStickerNamesForAvatarRecord:(id)a0;
- (id)filteredStickerConfigurations:(id)a0;
- (id)initWithEnvironment:(id)a0 forStickerPacks:(id)a1 stickerConfigurationNames:(id)a2;
- (id)stickerConfigurationForAvatarRecord:(id)a0 stickerName:(id)a1;
- (id)stickerConfigurationsForAvatarRecord:(id)a0;

@end
