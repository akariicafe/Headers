@class NSString, ML3GreenTeaLogger, PAApplication;

@interface ML3DatabasePrivacyContext : NSObject <NSSecureCoding> {
    PAApplication *_clientApplication;
    ML3GreenTeaLogger *_greenTeaLogger;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *bundleID;

+ (id)sharedContext;
+ (void)logDatabasePrivacyAccessWithAuditToken:(struct { unsigned int x0[8]; })a0;

- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (id)initWithClientIdentity:(id)a0;
- (id)init;
- (void)logDatabasePrivacyAccess;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_initWithPAApplication:(id)a0;
- (id)initWithCoder:(id)a0;

@end
