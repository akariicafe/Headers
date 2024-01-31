@class NSString, GCPhysicalInputElementCollection, NSObject;
@protocol OS_dispatch_queue, GCDevice;

@interface GCControllerLiveInput : GCControllerInputState <GCDevicePhysicalInput>

@property (readonly) GCControllerLiveInput *unmappedInput;
@property (readonly, weak) id<GCDevice> device;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (copy) id /* block */ elementValueDidChangeHandler;
@property (copy) id /* block */ inputStateAvailableHandler;
@property long long inputStateQueueDepth;
@property (readonly) double lastEventTimestamp;
@property (readonly) double lastEventLatency;
@property (readonly) GCPhysicalInputElementCollection *elements;
@property (readonly) GCPhysicalInputElementCollection *buttons;
@property (readonly) GCPhysicalInputElementCollection *axes;
@property (readonly) GCPhysicalInputElementCollection *switches;
@property (readonly) GCPhysicalInputElementCollection *dpads;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
