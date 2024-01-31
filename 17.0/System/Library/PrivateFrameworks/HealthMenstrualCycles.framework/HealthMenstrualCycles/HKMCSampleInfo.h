@class NSUUID;

@interface HKMCSampleInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long anchor;
@property (readonly, copy, nonatomic) NSUUID *UUID;
@property (readonly, nonatomic) long long dataType;
@property (readonly, nonatomic, getter=isDeleted) BOOL deleted;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAnchor:(long long)a0 UUID:(id)a1 dataType:(long long)a2 deleted:(BOOL)a3;

@end
