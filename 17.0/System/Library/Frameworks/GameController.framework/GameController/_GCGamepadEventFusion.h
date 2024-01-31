@class NSArray, NSString, _GCGamepadEventFusionConfig;

@interface _GCGamepadEventFusion : NSObject <_GCGamepadEventSource> {
    _GCGamepadEventFusionConfig *_config;
    struct { unsigned long long mask; float buttons[45]; } _fusedData;
    id *_lastEvent;
}

@property (retain, nonatomic) NSArray *observations;
@property (copy) NSArray *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)observeGamepadEvents:(id /* block */)a0;
- (id)initWithConfiguration:(id)a0 sources:(id)a1;

@end
