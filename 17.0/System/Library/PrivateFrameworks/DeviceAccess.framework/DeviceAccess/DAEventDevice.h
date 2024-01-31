@class DADevice;

@interface DAEventDevice : DAEvent

@property (readonly, nonatomic) DADevice *device;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithXPCObject:(id)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (id)descriptionWithLevel:(int)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithEventType:(long long)a0 device:(id)a1;

@end
