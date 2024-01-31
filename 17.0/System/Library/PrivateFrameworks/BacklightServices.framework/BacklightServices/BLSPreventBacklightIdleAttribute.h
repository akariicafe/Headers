@class NSString;

@interface BLSPreventBacklightIdleAttribute : BLSAttribute <BSXPCCoding>

@property (readonly, nonatomic) BOOL restartTimerOnInvalidation;
@property (readonly, nonatomic) BOOL clearUserInteraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)preventIdle;
+ (id)preventIdleAndRestartTimerOnInvalidation;
+ (id)preventIdleClearUserInteractionAndRestartTimerOnInvalidation;

- (void)encodeWithXPCDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (BOOL)checkEntitlementSourceForRequiredEntitlements:(id)a0 error:(out id *)a1;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRestartTimerOnInvalidation:(BOOL)a0 clearUserInteraction:(BOOL)a1;

@end
