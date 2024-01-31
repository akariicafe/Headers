@class NSArray, NSObject;
@protocol _LTSpeechTranslationDelegate, OS_dispatch_queue, _LTTranslationService;

@interface _LTLanguageAssetRequest : NSObject <NSSecureCoding, _LTLanguageAssetRequestProtocol> {
    NSObject<OS_dispatch_queue> *_queue;
    id<_LTTranslationService> _service;
    id /* block */ _done;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic) id<_LTSpeechTranslationDelegate> delegate;
@property (readonly, copy, nonatomic) NSArray *assets;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, copy, nonatomic) id /* block */ progress;
@property (readonly, copy, nonatomic) id /* block */ completion;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)assetRequestWithService:(id)a0 done:(id /* block */)a1;
- (void)assetResponseWithProgress:(id)a0 finished:(BOOL)a1 error:(id)a2;
- (id)initWithLanguageAssets:(id)a0 options:(unsigned long long)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;

@end
