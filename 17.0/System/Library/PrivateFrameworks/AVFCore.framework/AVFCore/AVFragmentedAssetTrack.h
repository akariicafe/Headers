@class AVFragmentedAssetTrackInternal;

@interface AVFragmentedAssetTrack : AVAssetTrack {
    AVFragmentedAssetTrackInternal *_fragmentedAssetTrack;
}

+ (BOOL)expectsPropertyRevisedNotifications;

@end
