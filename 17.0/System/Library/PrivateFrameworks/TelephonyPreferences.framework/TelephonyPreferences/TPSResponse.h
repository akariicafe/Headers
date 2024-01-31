@class NSError, NSString, CTXPCServiceSubscriptionContext;

@interface TPSResponse : NSObject <TPSSecureObject>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSError *error;
@property (readonly, nonatomic) CTXPCServiceSubscriptionContext *subscriptionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)unarchivedObjectFromData:(id)a0 error:(id *)a1;
+ (id)unarchivedObjectClasses;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToResponse:(id)a0;
- (id)archivedDataWithError:(id *)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSubscriptionContext:(id)a0 error:(id)a1;

@end
