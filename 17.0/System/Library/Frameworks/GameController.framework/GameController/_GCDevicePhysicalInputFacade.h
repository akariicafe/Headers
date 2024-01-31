@class GCPhysicalInputElementCollection, NSString, NSObject;
@protocol OS_dispatch_queue, GCDevice;

@interface _GCDevicePhysicalInputFacade : _GCDevicePhysicalInputView <GCDevicePhysicalInput, GCDevicePhysicalInputStateDiff>

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

+ (BOOL)automaticallyNotifiesObserversOfQueue;

- (id)capture;
- (id)objectForKeyedSubscript:(id)a0;
- (id)initWithParameters:(id)a0;
- (id)changedElements;
- (id)alternatePhysicalInputWithAttribute:(id)a0;
- (long long)changeForElement:(id)a0;
- (id)initWithTemplate:(id)a0 context:(id)a1;
- (id)nextInputState;

@end
