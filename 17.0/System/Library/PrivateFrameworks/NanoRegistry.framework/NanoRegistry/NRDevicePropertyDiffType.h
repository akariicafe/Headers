@class NRPBDevicePropertyDiffType, NRDevicePropertyDiff;

@interface NRDevicePropertyDiffType : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NRDevicePropertyDiff *diff;
@property (readonly, nonatomic) unsigned long long changeType;
@property (readonly, nonatomic) NRPBDevicePropertyDiffType *protobuf;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithProtobuf:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDiff:(id)a0 andChangeType:(unsigned long long)a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
