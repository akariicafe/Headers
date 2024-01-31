@class NSURL, NSString, NSSet;

@interface NSFileProviderPresenterInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSURL *changedURL;
@property (readonly) struct { unsigned int val[8]; } presenterAuditToken;
@property (readonly, copy) NSString *presenterID;
@property (readonly, copy) NSSet *observedUbiquityAttributes;

+ (id)infoWithPresenterID:(id)a0 auditToken:(struct { unsigned int x0[8]; })a1 observedUbiquityAttributes:(id)a2;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
