@class NSString;

@interface WBSCRDTGeneration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *deviceIdentifier;
@property (readonly, nonatomic) unsigned long long generation;
@property (readonly, nonatomic) BOOL isValid;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (long long)compare:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)incrementedGenerationWithDeviceIdentifier:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDeviceIdentifier:(id)a0 generation:(unsigned long long)a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
