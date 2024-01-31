@class NSArray, NSDictionary, NSString, CARPrototypeBoolPref;

@interface CARPrototypePref : NSObject

@property (class, readonly, nonatomic) NSArray *prototypePrefs;
@property (class, retain, nonatomic) NSDictionary *prototypePrefCache;
@property (class, readonly, nonatomic) BOOL showTrustedLockout;
@property (class, nonatomic) BOOL qaModeLockout;
@property (class, nonatomic) BOOL confirmedSafe;
@property (class, readonly, nonatomic) CARPrototypeBoolPref *showInternalApps;
@property (class, readonly, nonatomic) CARPrototypeBoolPref *showDisclaimerLabel;
@property (class, readonly, nonatomic) CARPrototypeBoolPref *showSerialNumber;
@property (class, readonly, nonatomic) CARPrototypeBoolPref *audioSharingEnabled;
@property (class, readonly, nonatomic) CARPrototypePref *contentSize;
@property (class, readonly, nonatomic) CARPrototypeBoolPref *showPrototypeApps;
@property (class, readonly, nonatomic) CARPrototypePref *nowPlayingAlbumArt;
@property (class, readonly, nonatomic) CARPrototypeBoolPref *showInternalSettings;
@property (class, readonly, nonatomic) CARPrototypeBoolPref *fakeNeatlineDashboardSupport;
@property (class, readonly, nonatomic) CARPrototypeBoolPref *flipDashboardLayout;
@property (class, readonly, nonatomic) CARPrototypeBoolPref *allowUnlimitedConnectionEvents;
@property (class, readonly, nonatomic) CARPrototypeBoolPref *smartWidgetDebugGestures;
@property (class, readonly, nonatomic) CARPrototypeBoolPref *smartWidgetDebugShowScore;
@property (class, readonly, nonatomic) CARPrototypeBoolPref *smartWidgetRelaxHomeInRangeCheck;
@property (class, readonly, nonatomic) CARPrototypePref *statusBarEdgeOverride;
@property (class, readonly, nonatomic) CARPrototypePref *statusBarHorizontalThreshold;
@property (class, readonly, nonatomic) CARPrototypePref *interfaceStyle;
@property (class, readonly, nonatomic) CARPrototypePref *latestInterfaceStyle;
@property (class, readonly, nonatomic) CARPrototypeBoolPref *useSceneInterfaceStyle;
@property (class, readonly, nonatomic) CARPrototypeBoolPref *disableLocationNightMode;
@property (class, readonly, nonatomic) CARPrototypeBoolPref *useNightModeTester;
@property (class, readonly, nonatomic) CARPrototypeBoolPref *showCarPlayTemplateUIHostInCluster;
@property (class, readonly, nonatomic) CARPrototypeBoolPref *shellCAFDisabled;
@property (class, readonly, nonatomic) CARPrototypeBoolPref *force2xCluster;

@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) id defaultValue;
@property (copy, nonatomic) id /* block */ valueChangedBlock;
@property (copy, nonatomic) id value;
@property (readonly, nonatomic) id valueOrDefault;
@property (nonatomic) BOOL state;
@property (copy, nonatomic) id cachedValue;
@property (readonly, nonatomic) id cachedValueOrDefault;
@property (nonatomic) BOOL cachedState;
@property (copy, nonatomic) id internalSettingsValue;
@property (nonatomic) BOOL internalSettingsState;

+ (id)_confirmedSafe;
+ (id)_qaModeLockout;
+ (id)prefWithDomain:(id)a0 key:(id)a1 title:(id)a2 defaultValue:(id)a3 valueChangedBlock:(id /* block */)a4;

- (id)description;
- (void).cxx_destruct;

@end
