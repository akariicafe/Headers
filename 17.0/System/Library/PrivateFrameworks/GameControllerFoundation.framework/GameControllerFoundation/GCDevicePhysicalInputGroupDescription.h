@class NSArray;

@interface GCDevicePhysicalInputGroupDescription : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *physicalInputs;

- (void)encodeWithCoder:(id)a0;
- (BOOL)validate:(out id *)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
