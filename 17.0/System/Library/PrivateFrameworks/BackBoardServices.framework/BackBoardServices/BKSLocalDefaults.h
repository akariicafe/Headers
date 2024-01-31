@class NSArray, NSDictionary, NSData, NSString;

@interface BKSLocalDefaults : BSAbstractDefaultDomain

@property (nonatomic) BOOL ignoreAccelerometerAndOrientationEvents;
@property (nonatomic, getter=isALSEnabled) BOOL ALSEnabled;
@property (nonatomic) long long ALSEpoch;
@property (retain, nonatomic) NSDictionary *ALSUserPreferences;
@property (nonatomic) float ALSDelayOnUnlock;
@property (nonatomic) int brightnessCurve;
@property (nonatomic) BOOL ignoreTetheringPreferences;
@property (nonatomic, getter=isDitheringEnabled) BOOL ditheringEnabled;
@property (nonatomic) BOOL simulatePhoneButton;
@property (nonatomic, getter=isDigitizerSignpostsEnabled) BOOL digitizerSignpostsEnabled;
@property (nonatomic) BOOL digitizerVisualizeTouches;
@property (nonatomic) BOOL digitizerVisualizeHitTestRegions;
@property (nonatomic) NSArray *digitizerServicePersistentProperties;
@property (nonatomic) BOOL showBuildNumber;
@property (nonatomic, getter=isEventBufferingEnabled) BOOL eventBufferingEnabled;
@property (nonatomic) BOOL visualizeMousePointer;
@property (nonatomic) unsigned int pointerRegionArrangementEdge;
@property (retain, nonatomic) NSArray *mouseInterpolation;
@property (retain, nonatomic) NSData *globalMouseDevicePreferences;
@property (weak, nonatomic) NSArray *loggingTypesEnabled;
@property (weak, nonatomic) NSString *forceMirroredOrientation;
@property (nonatomic) BOOL hideAppleLogoOnLaunch;
@property (nonatomic, getter=isSteveNoteRotationEnabled) BOOL steveNoteRotationEnabled;
@property (nonatomic) BOOL disableCloneMirroring;
@property (nonatomic) BOOL disableCAOverscan;
@property (nonatomic) BOOL disableCAYUV;
@property (nonatomic) BOOL disableCAScaling;
@property (nonatomic, getter=isSteveNoteOverscanEnabled) BOOL steveNoteOverscanEnabled;
@property (nonatomic) BOOL forceCloneMirroring;
@property (nonatomic) BOOL disableExtendedDisplayByDefault;
@property (nonatomic) BOOL allowWirelessExtendedDisplay;
@property (nonatomic) BOOL disableStudyLogBTKeyboardEventLogging;
@property (nonatomic) BOOL disableStudyLogBTKeyboardEventRedirection;
@property (nonatomic) BOOL disableStudyLogVolumeKeyLogging;
@property (nonatomic) BOOL disableStudyLogHomeButtonLogging;
@property (nonatomic) BOOL disableStudyLogButtonLogging;
@property (nonatomic) BOOL disableStudyLogCameraKeyLogging;
@property (nonatomic) BOOL disableStudyLogPowerButtonLogging;
@property (nonatomic) BOOL disableStudyLogAccelerometerLogging;
@property (nonatomic) BOOL disableStudyLogALSLogging;
@property (nonatomic) BOOL disableStudyLogGyroLogging;
@property (retain, nonatomic) NSDictionary *keyboardTypeRemap;

- (id)init;
- (void)setValue:(id)a0 forKey:(id)a1;
- (void)_bindAndRegisterDefaults;
- (void)migrateDefaultsIfNecessary;
- (id)valueForKey:(id)a0 defaultValueProvider:(id /* block */)a1;

@end
