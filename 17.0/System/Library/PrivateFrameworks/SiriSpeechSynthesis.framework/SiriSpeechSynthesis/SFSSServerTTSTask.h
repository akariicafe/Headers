@class SFSSOspreyTTSClient;

@interface SFSSServerTTSTask : SFSpeechSynthesisTask

@property (weak, nonatomic) SFSSOspreyTTSClient *ospreyTTSClient;

+ (id)createOspreyRequestFromReqeust:(id)a0;
+ (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })audioStreamBasicDescription:(id)a0;
+ (long long)convertPhoneSetTypeToServerPhoneSetType:(long long)a0;
+ (long long)convertVoiceTypeToServerType:(long long)a0;
+ (id)createGrpcHeadersFromRequest:(id)a0;
+ (id)flatPhonemeSequence:(id)a0;
+ (id)generateProsodyTransferConfig:(id)a0;
+ (id)generateResourceAssetFromResourceMetaInfo:(id)a0;
+ (id)generateVoiceAssetFromVoiceMetaInfo:(id)a0;

- (id)initWithRequest:(id)a0;
- (void).cxx_destruct;
- (void)cancelTask;
- (void)startTask:(id /* block */)a0;

@end
