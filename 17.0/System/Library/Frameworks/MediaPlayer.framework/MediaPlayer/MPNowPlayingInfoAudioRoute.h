@class MRContentItemMetadataAudioRoute, NSString;

@interface MPNowPlayingInfoAudioRoute : NSObject

@property (readonly, nonatomic) MRContentItemMetadataAudioRoute *mediaRemoteAudioRoute;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL supportsSpatialization;
@property (nonatomic, getter=isSpatializationEnabled) BOOL spatializationEnabled;

- (void).cxx_destruct;
- (id)initWithMediaRemoteAudioRoute:(id)a0;

@end
