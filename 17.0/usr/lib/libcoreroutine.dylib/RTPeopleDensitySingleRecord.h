@interface RTPeopleDensitySingleRecord : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long advertisementsCount;
@property (readonly, nonatomic) double scanDuration;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionDictionary;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithStats:(unsigned long long)a0 scanDuration:(double)a1;

@end
