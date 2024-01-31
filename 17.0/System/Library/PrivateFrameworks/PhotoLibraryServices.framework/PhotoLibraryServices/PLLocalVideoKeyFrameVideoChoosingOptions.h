@class NSString;

@interface PLLocalVideoKeyFrameVideoChoosingOptions : NSObject <PLVideoChoosingOptions> {
    BOOL _streamingAllowed;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isExplicitUserAction;
- (BOOL)isNetworkAccessAllowed;
- (BOOL)hasValidTimeRange;
- (BOOL)isMediumHighQualityAllowed;
- (BOOL)isStreamingAllowed;
- (BOOL)restrictToPlayableOnCurrentDevice;
- (long long)videoDeliveryMode;
- (long long)videoVersion;
- (id)initWithStreamingAllowed:(BOOL)a0;

@end
