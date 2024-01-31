@interface CLFCameraSettings : CLFBaseSettings

@property (class, readonly, nonatomic) CLFCameraSettings *sharedInstance;

@property (nonatomic) BOOL allowPhotoCapture;
@property (nonatomic) BOOL allowSelfieCapture;
@property (nonatomic) BOOL allowSelfieVideoCapture;
@property (nonatomic) BOOL allowVideoCapture;

+ (id)domainName;
+ (id)allPreferenceSelectorsAsStrings;

- (id)init;

@end
