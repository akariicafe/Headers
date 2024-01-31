@class NSNumber;

@interface MADUserSafetyQRCodeDetector : NSObject

@property (retain) NSNumber *sensitivity;

+ (BOOL)enabled;
+ (id)sensitiveURLString;

- (id)init;
- (void).cxx_destruct;
- (void)processPixelBuffer:(struct __CVBuffer { } *)a0 orientation:(unsigned int)a1 signpostPayload:(id)a2;

@end
