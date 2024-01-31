@class NSDictionary;

@interface CWFUserSettings : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long syncMode;
@property (nonatomic) long long askToJoinMode;
@property (nonatomic) long long autoHotspotMode;
@property (nonatomic) long long compatibilityMode;
@property (copy, nonatomic) NSDictionary *OSSpecificAttributes;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqualToUserSettings:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
