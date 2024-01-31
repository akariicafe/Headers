@class NSDictionary, NSString;

@interface UIUserNotificationCategory : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *actionsByContext;
@property (copy, nonatomic) NSString *identifier;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)actions;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)_maximumActionsForContext:(unsigned long long)a0;
- (id)actionsForContext:(unsigned long long)a0;
- (id)initWithIdentifier:(id)a0 actionsByContext:(id)a1;
- (id)validatedCategory;

@end
