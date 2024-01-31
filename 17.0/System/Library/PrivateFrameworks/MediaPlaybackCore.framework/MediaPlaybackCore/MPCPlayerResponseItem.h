@class NSString, NSArray, MPNowPlayingInfoAudioFormat, MPModelGenericObject, MPCPlayerResponseParticipant, MPCPlayerResponse, MPCPlayerAudioFormat, MPCPlayerAudioRoute, NSIndexPath;
@protocol MPCPlayerResponseItemMusicAudio;

@interface MPCPlayerResponseItem : NSObject <MPCPlayerResponseItemMusicAudio> {
    unsigned long long _seekSupport;
}

@property (readonly, weak, nonatomic) MPCPlayerResponse *response;
@property (readonly, nonatomic) NSIndexPath *indexPath;
@property (readonly, nonatomic) MPModelGenericObject *metadataObject;
@property (readonly, nonatomic) MPCPlayerResponseParticipant *enqueueingParticipant;
@property (readonly, nonatomic, getter=isPlaceholder) BOOL placeholder;
@property (readonly, nonatomic, getter=isAutoPlay) BOOL autoPlay;
@property (readonly, copy, nonatomic) NSString *contentItemIdentifier;
@property (readonly, nonatomic) long long revision;
@property (readonly, nonatomic) struct { double snapshotTime; double startTime; double endTime; double duration; double elapsedDuration; float rate; float defaultRate; BOOL isLiveContent; BOOL isLoading; } duration;
@property (readonly, copy, nonatomic) NSString *localizedDurationString;
@property (readonly, copy, nonatomic) NSString *explicitBadge;
@property (readonly, nonatomic) NSArray *languageOptionGroups;
@property (readonly, nonatomic) id<MPCPlayerResponseItemMusicAudio> musicAudio;
@property (readonly, copy, nonatomic) MPNowPlayingInfoAudioFormat *nowPlayingAudioFormat;
@property (readonly, nonatomic) MPCPlayerAudioFormat *preferredFormat;
@property (readonly, nonatomic) MPCPlayerAudioFormat *activeFormat;
@property (readonly, nonatomic) unsigned long long preferredTiers;
@property (readonly, nonatomic) long long activeFormatJustification;
@property (readonly, nonatomic) NSArray *alternateFormats;
@property (readonly, nonatomic) MPCPlayerAudioRoute *audioRoute;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)remove;
- (id)_stateDumpObject;
- (id)likeCommand;
- (id)dislikeCommand;
- (void).cxx_destruct;
- (id)wishlistCommand;
- (id)seekCommand;
- (id)playbackRateCommand;
- (id)_buildLanguageOptionGroups:(id)a0 currentLanguageOptions:(id)a1;
- (unsigned long long)_determineSeekSupport;
- (id)_favoriteCommand;
- (id)_feedbackCommandWithMediaRemoteCommand:(unsigned int)a0;
- (BOOL)_isDislikedMetadataObject;
- (BOOL)_isDislikedValueForSong:(id)a0;
- (BOOL)_isFavoriteMetadataObject;
- (BOOL)_isFavoriteValueForSong:(id)a0;
- (BOOL)_isLibraryAddEligibleMetadataObject;
- (id)_modelSongMetadataObject;
- (id)_suggestLessCommand;
- (id)initWithModelGenericObject:(id)a0 indexPath:(id)a1 enqueueingParticipant:(id)a2 response:(id)a3;
- (id)rateCommand;
- (id)switchToAlternativeFormat:(id)a0;

@end
