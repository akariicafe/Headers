@class SFSpeechSynthesisVoice, NSObject, NSLocale;
@protocol OS_dispatch_queue;

@interface SFSpeechSynthesizer : NSObject {
    NSObject<OS_dispatch_queue> *_serverTaskQueue;
    NSObject<OS_dispatch_queue> *_deviceTaskQueue;
    NSObject<OS_dispatch_queue> *_cacheTaskQueue;
}

@property (readonly, copy, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) SFSpeechSynthesisVoice *voice;
@property (readonly, nonatomic) BOOL isVoiceAssetDownloaded;

+ (void)initialize;
+ (id)supportedLocales;
+ (id)getVoiceByName:(id)a0;
+ (id)supportedVoicesByLocale:(id)a0;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)prewarm:(long long)a0;
- (id)initWithVoice:(id)a0;
- (id)startTaskWithRequest:(id)a0 completion:(id /* block */)a1;
- (id)startTaskWithRequest:(id)a0 delegate:(id)a1;
- (id)startTaskWithRequest:(id)a0 delegate:(id)a1 completion:(id /* block */)a2;

@end
