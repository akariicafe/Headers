@class REMStructuredLocation;

@interface REMAlarmLocationTrigger : REMAlarmTrigger <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) REMStructuredLocation *structuredLocation;
@property (nonatomic) long long proximity;

+ (id)cdEntityName;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)_deepCopy;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithStructuredLocation:(id)a0 proximity:(long long)a1;
- (BOOL)isContentEqual:(id)a0;
- (id)initWithObjectID:(id)a0 structuredLocation:(id)a1 proximity:(long long)a2;
- (BOOL)isTemporal;

@end
