@interface RPFeatureFlagUtility : NSObject {
    BOOL _stereoAudioControlCenter;
    BOOL _systemBannerEnabled;
    BOOL _screenRecordingCameraPip;
    BOOL _screenCaptureAlertEnabled;
    BOOL _coreGraphicsCaptureAPINotificiationEnabled;
}

@property (readonly, nonatomic) BOOL stereoAudioControlCenter;
@property (readonly, nonatomic) BOOL screenRecordingCameraPip;
@property (readonly, nonatomic) BOOL systemBannerEnabled;
@property (readonly, nonatomic) BOOL alwaysOnDisplayEnabled;
@property (readonly, nonatomic) BOOL screenCaptureAlertEnabled;
@property (readonly, nonatomic) BOOL independentWindowAlwaysHDEnabled;
@property (readonly, nonatomic) BOOL coreGraphicsCaptureAPINotificiationEnabled;

+ (id)sharedInstance;

- (id)init;

@end
