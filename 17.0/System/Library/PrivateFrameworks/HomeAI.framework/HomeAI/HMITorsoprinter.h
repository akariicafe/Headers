@class NSString;

@interface HMITorsoprinter : HMFObject <HMFLogging>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (struct __CVBuffer { } *)createTorsoPixelBufferForTorsoEvent:(id)a0 pixelBuffer:(struct __CVBuffer { } *)a1 error:(id *)a2;
+ (id)currentModelUUID;
+ (unsigned long long)currentTorsoRequestRevision;

- (id)torsoprintForTorsoPixelBuffer:(struct __CVBuffer { } *)a0 unrecognizable:(BOOL)a1 error:(id *)a2;

@end
