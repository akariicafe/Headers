@class AVWeakReference;

@interface AVSampleBufferGeneratorInternal : NSObject {
    struct OpaqueFigSampleGenerator { } *figSampleGenerator;
    AVWeakReference *weakReferenceToAsset;
    struct OpaqueCMTimebase { } *timebase;
}

@end
