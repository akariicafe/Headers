@class CADisplay, NSString, CBColorModuleiOS, CBDisplayModuleHID, NSMutableArray;

@interface CBEDRModule : CBModule <CBContainerModuleProtocol, CBHIDServiceProtocol> {
    float _currentLux;
    float _currentNits;
    float _maxNits;
    float _Ycomp;
    float _prevLux;
    float _prevNits;
    float _prevMaxNits;
    float _prevYcomp;
    CADisplay *_cadisplay;
    CBDisplayModuleHID *_displayModule;
    CBColorModuleiOS *_colorModule;
    NSMutableArray *_filters;
    NSMutableArray *_alsNodes;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)handleHIDEvent:(struct __IOHIDEvent { } *)a0 from:(struct __IOHIDServiceClient { } *)a1;
- (BOOL)addHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (id)copyPropertyForKey:(id)a0;
- (void)dealloc;
- (void)start;
- (void)stop;
- (void)handleHIDEventInternal:(struct __IOHIDEvent { } *)a0 from:(struct __IOHIDServiceClient { } *)a1;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (id)copyPropertyForKey:(id)a0 withParameter:(id)a1;
- (void)handleALSEvent:(id)a0;
- (BOOL)removeHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (void)handleNotificationForKey:(id)a0 withProperty:(id)a1;
- (void)handleBrightnessUpdate:(id)a0;
- (void)handleTargetWhitepointUpdate:(id)a0;
- (id)initWithQueue:(id)a0 display:(id)a1 colorModule:(id)a2 andDisplayModule:(id)a3;
- (void)updateEDRState;

@end
