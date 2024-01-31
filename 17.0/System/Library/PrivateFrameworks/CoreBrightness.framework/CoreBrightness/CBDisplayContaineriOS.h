@class CADisplay, NSString, NSArray, NSUUID, CBCAManager, NSMutableArray;
@protocol CBContainerModuleProtocol, CBHIDServiceProtocol, CBContainerProtocol, NightShiftSupportProtocol, CBBrightnessProxy;

@interface CBDisplayContaineriOS : CBContainer <CBContainerProtocol, CBHIDServiceProtocol, NightShiftSupportProtocol, CBStatusInfoProtocol, CBDisplayModeProtocol> {
    NSMutableArray *_relevantServices;
    NSMutableArray *_modules;
    NSArray *_allowlist;
    NSUUID *_displayContainerUUID;
    NSMutableArray *_missedProperties;
    NSMutableArray *_missedKeys;
    id<CBContainerModuleProtocol> _displayControlModule;
    id<CBContainerModuleProtocol, CBHIDServiceProtocol> _autoBrightnessModule;
    id<CBContainerProtocol, CBHIDServiceProtocol, NightShiftSupportProtocol> _harmonyContainer;
    id<CBContainerModuleProtocol, CBHIDServiceProtocol> _edrControlModule;
    id<CBContainerModuleProtocol> _AODModule;
    id<CBContainerModuleProtocol> _SliderCommitTelemetryModule;
    unsigned int _displayService;
    BOOL _running;
    BOOL _builtIn;
    BOOL _isExternal;
    BOOL _alsServiceReady;
    unsigned long long _displayID;
    unsigned long long _registryID;
    NSString *_description;
    CADisplay *_display;
    id<CBBrightnessProxy> _brtCtl;
    unsigned int _armBacklightDisplayService;
    struct IONotificationPort { } *_displayArrivalNotificationPort;
    unsigned int _displayArrivalIterator;
    unsigned int _displayRemovalIterator;
    CBCAManager *_displayCAManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)handleHIDEvent:(struct __IOHIDEvent { } *)a0 from:(struct __IOHIDServiceClient { } *)a1;
- (BOOL)addHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (id)copyIdentifiers;
- (id)initWithBacklightService:(unsigned int)a0;
- (id)copyPropertyForKey:(id)a0;
- (BOOL)isReady;
- (BOOL)createAndAddSliderCommitTelemetryModule;
- (void)dealloc;
- (void)handleNotificationForKey:(id)a0 withProperty:(id)a1 from:(id)a2;
- (BOOL)start;
- (BOOL)handleCBBrtCtlDisplayContainerStart;
- (BOOL)initialiseHIDDisplay;
- (void)setColorMitigations;
- (id)copyStatusInfo;
- (void)tearDownInternalModules;
- (BOOL)matchDisplayWithHidService:(struct __IOHIDServiceClient { } *)a0;
- (BOOL)handleDisplayArrival:(unsigned int)a0;
- (id)className;
- (void)unregisterNotificationBlock;
- (void)stop;
- (void)sendNotificationForKey:(id)a0 andValue:(id)a1;
- (BOOL)findBacklight;
- (void)setNightShiftFactorDictionary:(id)a0;
- (void)setPreference:(id)a0 forKey:(id)a1 user:(id)a2;
- (id)initWithCBBrtControl:(id)a0;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (void)handlePresetChange:(id)a0;
- (id)copyPreferenceForKey:(id)a0 user:(id)a1;
- (id)copyPropertyInternalForKey:(id)a0;
- (void)setupInternalBrtCtlModules;
- (BOOL)setPropertyNoQueue:(id)a0 forKey:(id)a1;
- (void)registerNotificationBlock:(id /* block */)a0;
- (BOOL)setupInternalModules;
- (BOOL)handleDisplayModeUpdate:(id)a0;
- (BOOL)handleCBDisplayContainerStart;
- (BOOL)removeHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (id)initWithCADisplay:(id)a0;

@end
