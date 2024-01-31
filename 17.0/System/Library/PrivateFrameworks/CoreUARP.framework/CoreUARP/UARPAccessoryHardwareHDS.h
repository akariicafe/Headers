@class NSUUID;

@interface UARPAccessoryHardwareHDS : UARPAccessoryHardwareID

@property (readonly) NSUUID *uuid;

- (id)initWithUUID:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
