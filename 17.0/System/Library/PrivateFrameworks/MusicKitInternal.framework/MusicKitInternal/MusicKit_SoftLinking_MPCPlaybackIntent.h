@class NSString, NSData, MPCPlaybackIntent;

@interface MusicKit_SoftLinking_MPCPlaybackIntent : NSObject {
    MPCPlaybackIntent *_underlyingPlaybackIntent;
}

@property (class, readonly, nonatomic) MusicKit_SoftLinking_MPCPlaybackIntent *emptyPlaybackIntent;

@property (copy, nonatomic, setter=setPlayActivityFeatureName:) NSString *playActivityFeatureName;
@property (copy, nonatomic, setter=setPlayActivityRecommendationData:) NSData *playActivityRecommendationData;
@property (nonatomic, setter=setRepeatMode:) long long repeatMode;
@property (nonatomic, setter=setShuffleMode:) long long shuffleMode;
@property (readonly, nonatomic) id rawPlaybackIntent;

- (id)init;
- (void).cxx_destruct;
- (id)_underlyingPlaybackIntent;
- (id)initWithLegacyLibraryRequest:(id)a0 allowedIdentifiers:(id)a1 startIdentifierSet:(id)a2 onlyLibraryContent:(BOOL)a3;
- (id)initWithLegacyModelStationSeeding:(id)a0;
- (id)initWithStationSeedingIdentifierSet:(id)a0;
- (id)initWithStoreIDs:(id)a0 startIdentifierSet:(id)a1;

@end
