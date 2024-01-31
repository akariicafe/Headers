@class NSUUID, NSString, NSHashTable, CSAudioStartStreamOption, CSAudioStreamRequest;
@protocol CSAudioStreamProviding, CSAudioStreamProvidingDelegate;

@interface CSAudioStream : NSObject <CSAudioStreamProvidingDelegate>

@property BOOL streaming;
@property (retain) NSUUID *streamingUUID;
@property (weak, nonatomic) id<CSAudioStreamProviding> streamProvider;
@property (weak, nonatomic) id<CSAudioStreamProvidingDelegate> delegate;
@property (readonly, nonatomic) unsigned long long startSampleCount;
@property (readonly, nonatomic) unsigned long long lastForwardedSampleCount;
@property (nonatomic, setter=setScheduledFutureSample:) BOOL scheduledFutureSample;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) CSAudioStreamRequest *streamRequest;
@property (readonly, nonatomic) NSString *UUID;
@property (retain, nonatomic, setter=setStartStreamOption:) CSAudioStartStreamOption *startStreamOption;
@property (nonatomic) BOOL isWeakStream;
@property (readonly, nonatomic) NSHashTable *tandemStreams;
@property (nonatomic) BOOL needsBoost12dB;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)recordSettings;
- (BOOL)isNarrowBand;
- (void)audioStreamProvider:(id)a0 audioChunkForTVAvailable:(id)a1;
- (void)dealloc;
- (void)audioStreamProvider:(id)a0 didStopStreamUnexpectedly:(long long)a1;
- (BOOL)isStreaming;
- (void).cxx_destruct;
- (void)audioStreamProvider:(id)a0 didHardwareConfigurationChange:(long long)a1;
- (void)audioStreamProvider:(id)a0 audioBufferAvailable:(id)a1;
- (void)audioStreamProvider:(id)a0 audioBufferAvailable:(id)a1 lastForwardedSampleCount:(unsigned long long)a2;
- (id)initWithAudioStreamProvider:(id)a0 streamName:(id)a1 streamRequest:(id)a2;
- (BOOL)prepareAudioStreamSyncWithRequest:(id)a0 error:(id *)a1;
- (void)prepareAudioStreamWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)startAudioStreamWithOption:(id)a0 completion:(id /* block */)a1;
- (void)stopAudioStreamWithOption:(id)a0 completion:(id /* block */)a1;
- (void)updateAudioStreamStartTimeInSampleCount:(unsigned long long)a0;

@end
