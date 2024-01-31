@class GCController, GCHapticCapabilityGraph, NSMutableSet;

@interface GCDeviceHaptics : NSObject {
    GCHapticCapabilityGraph *_capabilityGraph;
}

@property (weak, nonatomic) GCController *controller;
@property (readonly, nonatomic) GCHapticCapabilityGraph *capabilityGraph;
@property (retain, nonatomic) NSMutableSet *supportedLocalities;
@property (weak, nonatomic) GCController *controller;

- (void).cxx_destruct;
- (id)createEngineWithLocality:(id)a0;
- (id)initWithCapabilityGraph:(id)a0;

@end
