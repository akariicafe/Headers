@class NSSet;

@interface HDPendingNotificationInstructions : NSObject <NSCopying>

@property (readonly, nonatomic) long long action;
@property (readonly, copy, nonatomic) NSSet *instructions;
@property (readonly, copy, nonatomic) NSSet *messageIdentifiers;
@property (readonly, copy, nonatomic) NSSet *categoryIdentifiers;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAction:(long long)a0 instructions:(id)a1;

@end
