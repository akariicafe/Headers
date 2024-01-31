@class NSDate;

@interface BBSectionMuteAssertion : BBMuteAssertion

@property (readonly, nonatomic) NSDate *expirationDate;

+ (BOOL)supportsSecureCoding;
+ (id)sectionMuteAssertionUntilDate:(id)a0;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithExpirationDate:(id)a0;
- (void)getNextExpirationDate:(id *)a0 wasPurged:(BOOL *)a1;
- (BOOL)isActiveForThreadIdentifier:(id)a0;

@end
