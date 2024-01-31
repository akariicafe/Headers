@class NSString, AVAssetTrack, AVWeakReference, AVOutputSettings;

@interface AVAssetReaderTrackOutputInternal : NSObject {
    AVAssetTrack *track;
    AVOutputSettings *outputSettings;
    NSString *audioTimePitchAlgorithm;
    BOOL appliesPreferredTrackTransform;
    BOOL limitsImageQueueCapacityToOneFrame;
    AVWeakReference *weakReferenceToAttachedAdaptor;
}

@end
