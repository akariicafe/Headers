@class NSUUID, NSNumber, PHASEMixerDefinition, PHASENumberMetaParameterDefinition, NSMutableDictionary, NSDictionary, PHASEMixer, PHASEListener, PHASESource, PHASEGroup, PHASEEngine;

@interface PHASEExternalOutputStreamController : NSObject {
    PHASEEngine *_engine;
    struct UniqueObjectId { unsigned long long mStorage[2]; } _controlToken;
    long long _state;
    NSMutableDictionary *_soundEvents;
    NSMutableDictionary *_metaParameters;
    NSUUID *_streamGroupUUID;
    PHASENumberMetaParameterDefinition *_gainMetaParameterDefinition;
    PHASEMixerDefinition *_mixerDefinition;
    PHASESource *_source;
    PHASEListener *_listener;
    PHASEGroup *_group;
    BOOL _normalize;
    NSNumber *_targetLKFS;
    long long _calibrationMode;
    double _level;
    unsigned int _channelLayoutTag;
}

@property (class, readonly, nonatomic) double recommendedAbsoluteCalibrationLevelForVoiceStreams;

@property (readonly, nonatomic) PHASEMixer *mixer;
@property (readonly, copy) NSDictionary *mixers;
@property (readonly) NSDictionary *metaParameters;

+ (id)new;
+ (void)controllerWithEngine:(id)a0 streamUUID:(id)a1 gainMetaParameterDefinition:(id)a2 mixerDefinition:(id)a3 source:(id)a4 listener:(id)a5 callback:(id /* block */)a6;
+ (void)controllerWithEngine:(id)a0 streamUUID:(id)a1 gainMetaParameterDefinition:(id)a2 mixerDefinition:(id)a3 source:(id)a4 listener:(id)a5 group:(id)a6 normalize:(BOOL)a7 calibrationMode:(long long)a8 level:(double)a9 callback:(id /* block */)a10;
+ (void)controllerWithEngine:(id)a0 streamUUID:(id)a1 gainMetaParameterDefinition:(id)a2 mixerDefinition:(id)a3 source:(id)a4 listener:(id)a5 group:(id)a6 normalize:(BOOL)a7 targetLKFS:(id)a8 calibrationMode:(long long)a9 level:(double)a10 callback:(id /* block */)a11;
+ (void)controllerWithEngine:(id)a0 streamUUID:(id)a1 gainMetaParameterDefinition:(id)a2 mixerDefinition:(id)a3 source:(id)a4 listener:(id)a5 normalize:(BOOL)a6 calibrationMode:(long long)a7 level:(double)a8 callback:(id /* block */)a9;
+ (void)controllerWithEngine:(id)a0 streamUUID:(id)a1 gainMetaParameterDefinition:(id)a2 mixerDefinition:(id)a3 source:(id)a4 listener:(id)a5 referenceGainDBSPL:(double)a6 callback:(id /* block */)a7;
+ (void)controllerWithEngine:(id)a0 streamUUID:(id)a1 mixerDefinition:(id)a2 source:(id)a3 listener:(id)a4 callback:(id /* block */)a5;

- (id)init;
- (void)dealloc;
- (BOOL)startAndReturnError:(id *)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)prepareAndReturnError:(id *)a0;
- (void)stopAndInvalidate;
- (id)initWithEngine:(id)a0 streamGroupUUID:(id)a1 gainMetaParameterDefinition:(id)a2 mixerDefinition:(id)a3 source:(id)a4 listener:(id)a5 group:(id)a6 normalize:(BOOL)a7 targetLKFS:(id)a8 calibrationMode:(long long)a9 level:(double)a10 outError:(id *)a11;
- (id)metaParametersForStreamUUID:(id)a0;
- (void)setMetaParameter:(id)a0 value:(id)a1;
- (void)setMetaParameter:(id)a0 value:(double)a1 withTimeInterval:(double)a2;
- (id)soundEventForStreamUUID:(id)a0;
- (void)stopAndDestroy;
- (void)updateStreamGroupUUID:(id)a0 streamUUID:(id)a1 state:(long long)a2;

@end
