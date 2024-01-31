@class NSString;

@interface BMDevice : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *idsDeviceIdentifier;
@property (readonly, copy, nonatomic) NSString *deviceIdentifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *model;
@property (readonly, nonatomic) long long platform;

+ (id)new;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDeviceIdentifier:(id)a0 idsDeviceIdentifier:(id)a1 name:(id)a2 model:(id)a3 platform:(long long)a4;

@end
