@class NSString, NSURL;

@interface TRINamespaceRecord : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned int compatibilityVersion;
@property (readonly, nonatomic) NSURL *treatmentURL;

+ (id)recordWithName:(id)a0 compatibilityVersion:(unsigned int)a1 treatmentURL:(id)a2;

- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqualToRecord:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithReplacementTreatmentURL:(id)a0;
- (id)copyWithReplacementCompatibilityVersion:(unsigned int)a0;
- (id)initWithName:(id)a0 compatibilityVersion:(unsigned int)a1 treatmentURL:(id)a2;
- (id)description;
- (id)copyWithReplacementName:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
