@class NSArray, NSSet;

@interface HMAssistantAccessControl : HMAccessControl <NSSecureCoding, NSCopying, NSMutableCopying> {
    unsigned long long _options;
    NSSet *_accessories;
    BOOL _activityNotificationsEnabledForPersonalRequests;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, getter=isEnabled) BOOL enabled;
@property (readonly) BOOL allowUnauthenticatedRequests;
@property (readonly, copy) NSArray *accessories;
@property (readonly, getter=areActivityNotificationsEnabledForPersonalRequests) BOOL activityNotificationsEnabledForPersonalRequests;

+ (id)shortDescription;
+ (BOOL)isAccessorySupported:(id)a0;

- (id)shortDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithUser:(id)a0;
- (id)description;
- (unsigned long long)options;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionWithPointer:(BOOL)a0;

@end
