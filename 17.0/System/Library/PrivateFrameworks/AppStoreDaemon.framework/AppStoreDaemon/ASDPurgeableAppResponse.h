@class NSArray;

@interface ASDPurgeableAppResponse : ASDRequestResponse <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long purgeableSize;
@property (readonly, nonatomic) NSArray *purgeableApps;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPurgeableSize:(long long)a0 purgeableApps:(id)a1;

@end
