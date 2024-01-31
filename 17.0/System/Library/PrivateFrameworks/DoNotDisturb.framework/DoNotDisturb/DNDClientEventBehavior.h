@class NSString, NSUUID, DNDClientEventDetails;

@interface DNDClientEventBehavior : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *redactedDescription;
@property (readonly, nonatomic) unsigned long long resolutionReason;
@property (readonly, copy, nonatomic) NSUUID *activeModeUUID;
@property (readonly, copy, nonatomic) DNDClientEventDetails *eventDetails;
@property (readonly, nonatomic) unsigned long long interruptionSuppression;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithEventDetails:(id)a0 interruptionSuppression:(unsigned long long)a1 resolutionReason:(unsigned long long)a2 activeModeUUID:(id)a3;
- (id)description;
- (void).cxx_destruct;
- (id)_descriptionForRedacted:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
