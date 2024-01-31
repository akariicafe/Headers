@class NSData;

@interface CMLPECConfig : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *serializedPECConfig;
@property (readonly, copy, nonatomic) NSData *serializedKeyStatus;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithPECConfig:(id)a0 keyStatus:(id)a1;

@end
