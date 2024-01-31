@class SFResultSection;

@interface SFSectionEngagementFeedback : SFFeedback <NSCopying>

@property (copy, nonatomic) SFResultSection *section;
@property (nonatomic) unsigned long long triggerEvent;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSection:(id)a0 triggerEvent:(unsigned long long)a1;

@end
