@class NSSet, NSMutableArray;

@interface GCHIDDeviceInput : NSObject {
    struct __IOHIDQueue { } *_queue;
    id /* block */ _cancelHandler;
    id /* block */ _inputHandler;
    NSMutableArray *_changedElements;
    unsigned long long _cachedDeviceRegistryEntryID;
    BOOL _activated;
}

@property (readonly) struct __IOHIDDevice { } *deviceRef;
@property (nonatomic, getter=isSuspended) BOOL suspended;
@property (readonly) NSSet *elements;

- (id)init;
- (void)dealloc;
- (void)setInputElementMatching:(id)a0;
- (void)activate;
- (void)setDispatchQueue:(id)a0;
- (void).cxx_destruct;
- (void)setCancelHandler:(id /* block */)a0;
- (void)cancel;
- (void)setBatchInputElementHandler:(id /* block */)a0;
- (id)initWithHIDDevice:(id)a0;
- (id)initWithIOHIDDevice:(struct __IOHIDDevice { } *)a0;
- (void)setInputElements:(id)a0;

@end
