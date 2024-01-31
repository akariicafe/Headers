@class AVAsset, AVAudioMix, NSDictionary;

@interface PUPhotoKitMediaProviderAVAssetDownloadSimulation : PUPhotoKitMediaProviderDownloadSimulation

@property (retain, nonatomic, setter=_setResultAVAsset:) AVAsset *_resultAVAsset;
@property (retain, nonatomic, setter=_setResultAudioMix:) AVAudioMix *_resultAudioMix;
@property (copy, nonatomic, setter=_setResultInfo:) NSDictionary *_resultInfo;
@property (copy, nonatomic) id /* block */ externalProgressHandler;
@property (readonly, copy, nonatomic) id /* block */ internalProgressHandler;
@property (copy, nonatomic) id /* block */ externalResultHandler;
@property (readonly, copy, nonatomic) id /* block */ internalResultHandler;

- (id)init;
- (void).cxx_destruct;
- (void)_handleResultAVAsset:(id)a0 audioMix:(id)a1 info:(id)a2;
- (void)endSimulationWithError:(id)a0;
- (void)updateSimulationWithProgress:(double)a0;

@end
