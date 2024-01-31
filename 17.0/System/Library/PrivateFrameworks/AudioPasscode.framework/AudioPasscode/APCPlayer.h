@class APCPlayerEngine, APCEncoderProcessor, AUPasscodeCodecConfiguration, NSData, APCPlayerEmbedInfo, NSObject, AVPlayer;
@protocol OS_dispatch_queue;

@interface APCPlayer : NSObject {
    AVPlayer *_player;
    APCEncoderProcessor *_encodeProcessor;
    APCPlayerEngine *_playerEngine;
    AUPasscodeCodecConfiguration *_codecConfig;
}

@property (readonly, copy, nonatomic) NSData *payload;
@property (readonly, copy, nonatomic) NSData *configurationData;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) BOOL isPlaying;
@property (readonly, nonatomic) APCPlayerEmbedInfo *embeddingInfo;
@property (nonatomic) unsigned long long callbackTimingMSec;

+ (unsigned long long)assetIDFromIdentifier:(id)a0;
+ (id)carrierAssetIdentifiers;
+ (id)fileNameForCarrierAsset:(unsigned long long)a0;
+ (id)urlForCarrierAsset:(unsigned long long)a0;

- (id)init;
- (void).cxx_destruct;
- (void)stopSendWithFadeOut:(float)a0 completion:(id /* block */)a1;
- (id)initWithListenerCapabilityData:(id)a0;
- (id)createCompatibleConfigForCapabilites:(id)a0;
- (void)endPasscodeEmbedding;
- (id)initWithCodecConfiguration:(id)a0;
- (id)initWithListenerCapabilityData:(id)a0 payloadLength:(unsigned long long)a1;
- (float)preparePayload:(id)a0 usingCarrierAsset:(unsigned long long)a1 error:(id *)a2;
- (float)preparePayload:(id)a0 usingCarrierAtURL:(id)a1 error:(id *)a2;
- (BOOL)startSend;
- (BOOL)startSendAtTime:(unsigned long long)a0 withBeginning:(id /* block */)a1;
- (void)stopSend:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)stopSendAfterMinimumLoops:(unsigned long long)a0 withCompletion:(id /* block */)a1;

@end
