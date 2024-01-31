@interface DockKitCore.DeviceNotification : NSObject {
    void /* unknown type, empty encoding */ allocatedLock;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ _state;
    void /* unknown type, empty encoding */ token;
}

@property (nonatomic) unsigned long long state;

- (id)init;
- (void)dealloc;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 queue:(id)a1 handler:(id /* block */)a2;

@end
