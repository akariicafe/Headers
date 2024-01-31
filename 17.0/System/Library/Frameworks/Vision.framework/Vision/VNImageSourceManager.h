@class NSURL, NSData;

@interface VNImageSourceManager : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _getOrientationLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _loadSubSample1Lock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _loadSubSample2Lock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _loadSubSample4Lock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _loadSubSample8Lock;
    struct CGImageSource { } *_imageSourceSubsample1;
    struct CGImageSource { } *_imageSourceSubsample2;
    struct CGImageSource { } *_imageSourceSubsample4;
    struct CGImageSource { } *_imageSourceSubsample8;
    NSURL *_imageURL;
    NSData *_imageData;
    unsigned int _orientation;
}

- (void)dealloc;
- (void).cxx_destruct;
- (struct CGImageSource { } *)_cgImageSourceAtAddress:(struct CGImageSource **)a0 forSubSampleFactor:(unsigned int)a1 protectedWithUnfairLock:(struct os_unfair_lock_s { unsigned int x0; } *)a2 operatingInLowPriority:(BOOL)a3 error:(id *)a4;

@end
