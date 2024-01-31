@interface VKCStickerEffectVideoProcessor : NSObject

+ (int)_transcodeSequenceData:(id)a0 effect:(id)a1 maxDimension:(unsigned long long)a2 outputData:(id *)a3 progressHandler:(id /* block */)a4;
+ (void)applyEffect:(id)a0 toImageSequence:(id)a1 progressHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;

@end
