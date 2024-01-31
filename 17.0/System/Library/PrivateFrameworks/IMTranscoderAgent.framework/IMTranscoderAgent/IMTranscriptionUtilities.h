@interface IMTranscriptionUtilities : NSObject

+ (void)transcribeAudioForAudioTransferURL:(id)a0 withCompletion:(id /* block */)a1;
+ (void)commitTranscriptionWithString:(id)a0 confidenceSum:(double)a1 numberOfSegments:(unsigned long long)a2 completion:(id /* block */)a3;
+ (id)localizedSeparatorString;
+ (id)transcoderBundle;

@end
