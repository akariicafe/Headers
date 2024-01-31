@class VNEntityIdentificationModelAlgorithm, NSDate;

@interface VNEntityIdentificationModelInformation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long version;
@property (readonly, copy) NSDate *lastModificationDate;
@property (readonly, getter=isReadOnly) BOOL readOnly;
@property (readonly, copy) VNEntityIdentificationModelAlgorithm *algorithm;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithVersion:(unsigned long long)a0 algorithm:(id)a1 lastModificationDate:(id)a2 readOnly:(BOOL)a3;

@end
