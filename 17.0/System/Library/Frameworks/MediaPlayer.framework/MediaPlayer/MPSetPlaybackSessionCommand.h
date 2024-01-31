@class NSString, NSArray;

@interface MPSetPlaybackSessionCommand : MPRemoteCommand

@property (copy, nonatomic) NSString *currentPlaybackSessionIdentifier;
@property (copy, nonatomic) NSString *currentPlaybackSessionRevision;
@property (copy, nonatomic) NSArray *exportableSessionTypes;
@property (copy, nonatomic) NSArray *supportedSessionTypes;

- (id)_mediaRemoteCommandInfoOptions;
- (void).cxx_destruct;

@end
