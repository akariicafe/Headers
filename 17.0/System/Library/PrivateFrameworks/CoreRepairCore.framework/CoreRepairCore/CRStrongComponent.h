@class NSString;

@interface CRStrongComponent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *componentType;
@property (retain, nonatomic) NSString *identifer;
@property (retain, nonatomic) NSString *fwVersion;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithComponentType:(id)a0 identifier:(id)a1 fwVersion:(id)a2;

@end
