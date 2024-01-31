@class NSNumber, DeviceDetail;

@interface FindDeviceAndPlaySoundIntentResponse : INIntentResponse

@property (nonatomic, retain) NSNumber *needsConfirmPlaySound;
@property (nonatomic, retain) DeviceDetail *device;
@property (nonatomic) void /* unknown type, empty encoding */ code;

- (id)init;
- (id)initWithBackingStore:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCode:(long long)a0 userActivity:(id)a1;
- (id)initWithPropertiesByName:(id)a0;

@end
