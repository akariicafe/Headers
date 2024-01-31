@class NSString, NSMutableArray, _EARLMTKaldiVocab;

@interface TextProcessorTrain : NSObject <TextProcessor> {
    NSMutableArray *_text;
    _EARLMTKaldiVocab *_vocab;
    long long *_numValidTokens;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)addText:(id)a0;
- (void)addText:(id)a0 length:(unsigned long long)a1;
- (void)addTokenizedText:(id)a0 length:(unsigned long long)a1;
- (id)initWithVocab:(id)a0;
- (unsigned long long)numberSamples;
- (long long)numberTokens;
- (void)shuffleSamples;
- (id)textSequence;

@end
