@interface APCCodecFactory : NSObject

+ (id)createBestConfigForCapability:(id)a0;
+ (struct unique_ptr<APCDecoderBase, std::default_delete<APCDecoderBase>> { struct __compressed_pair<APCDecoderBase *, std::default_delete<APCDecoderBase>> { struct APCDecoderBase *x0; } x0; })createDecoderWithConfig:(id)a0 apcConfig:(void *)a1 error:(id *)a2;
+ (struct unique_ptr<APCEncoderBase, std::default_delete<APCEncoderBase>> { struct __compressed_pair<APCEncoderBase *, std::default_delete<APCEncoderBase>> { struct APCEncoderBase *x0; } x0; })createEncoderWithConfig:(id)a0 apcConfig:(void *)a1 payloadData:(id)a2;
+ (float)evaluateCarrierWithConfig:(id)a0 carrier:(id)a1 embeddingResult:(id *)a2;

@end
