@class NSString;

@interface HMITorsoQuality : HMFObject <HMFLogging>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (float)entropy:(const void *)a0 numPixels:(int)a1;
+ (float)entropyOfLaplacianForBGRAPixelBuffer:(struct __CVBuffer { } *)a0;
+ (float)entropyOfSaturationForBGRAPixelBuffer:(struct __CVBuffer { } *)a0;


@end
