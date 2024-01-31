@class NSString, NRDevice, NSObject;
@protocol OS_dispatch_queue;

@interface NRActiveDeviceAssertion : NSObject {
    NRDevice *_device;
    NSString *_identifier;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) BOOL isActive;
@property (readonly, retain, nonatomic) NRDevice *device;

- (void)dealloc;
- (void)invalidate;
- (id)description;
- (void).cxx_destruct;

@end
