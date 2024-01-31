@class RTStoredLocationEnumerationOptions;

@interface RTStoredLocationEnumerationContext : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) RTStoredLocationEnumerationOptions *options;
@property (readonly, nonatomic) unsigned long long offset;

- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqualToContext:(id)a0;
- (id)initWithEnumerationOptions:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithEnumerationOptions:(id)a0 offset:(unsigned long long)a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
