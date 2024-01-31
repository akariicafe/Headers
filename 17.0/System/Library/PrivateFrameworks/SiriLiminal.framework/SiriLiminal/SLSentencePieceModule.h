@class NSString;

@interface SLSentencePieceModule : NSObject <SLODLDTokenizerComponent> {
    struct shared_ptr<sentencepiece::SentencePieceProcessor> { struct SentencePieceProcessor *__ptr_; struct __shared_weak_count *__cntrl_; } _processor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)encodeUtterance:(id)a0;
- (id)initWithConfigFile:(id)a0;
- (id)initWithConfigFile:(id)a0 isModelMmap:(BOOL)a1;
- (long long)setSPMEncoderOptions:(id)a0;

@end
