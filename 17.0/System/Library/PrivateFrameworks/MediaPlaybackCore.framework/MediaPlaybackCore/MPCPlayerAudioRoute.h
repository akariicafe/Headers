@class NSString, NSDictionary, MPNowPlayingInfoAudioRoute, MPNowPlayingInfoAudioFormat;

@interface MPCPlayerAudioRoute : NSObject <MPCPlaybackEngineEventPayloadValueJSONConvertible, NSCopying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) MPNowPlayingInfoAudioRoute *nowPlayingAudioRoute;
@property (readonly, nonatomic) MPNowPlayingInfoAudioFormat *nowPlayingAudioFormat;
@property (readonly, nonatomic) BOOL canStreamSpatial;
@property (readonly, nonatomic) BOOL canRenderSpatial;
@property (readonly, nonatomic) long long multiChannelSupport;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL supportsSpatialization;
@property (readonly, nonatomic) BOOL isSpatializationEnabled;
@property (readonly, nonatomic) NSString *humanDescription;

+ (id)payloadValueFromJSONValue:(id)a0;

- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithNowPlayingInfoAudioRoute:(id)a0;
- (id)initWithRoute:(id)a0 spatialIsAlwaysOn:(BOOL)a1;
- (id)mpc_jsonValue;

@end
