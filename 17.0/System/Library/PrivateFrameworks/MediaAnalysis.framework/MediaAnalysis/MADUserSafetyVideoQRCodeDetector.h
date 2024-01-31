@interface MADUserSafetyVideoQRCodeDetector : MADUserSafetyQRCodeDetector

+ (int)generateDecoderSettings:(id)a0 decoderConfig:(id)a1 withRequest:(id)a2 videoDuration:(double)a3;

- (id)sensitivityFromQRCodeInVideo:(id)a0 request:(id)a1 signpostPayload:(id)a2 progressHandler:(id /* block */)a3;

@end
