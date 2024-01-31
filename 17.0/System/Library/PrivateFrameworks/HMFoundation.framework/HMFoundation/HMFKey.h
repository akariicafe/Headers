@class NSString, NSData;

@interface HMFKey : HMFObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long size;
@property (readonly, copy) NSString *type;
@property (readonly, copy) NSData *data;

- (id)initWithType:(id)a0 size:(unsigned long long)a1 data:(id)a2;
- (id)init;
- (unsigned long long)hash;
- (id)shortDescription;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToData:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
