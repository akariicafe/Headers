@class NSString, ENRegion;

@interface ENXPCClient : NSObject

@property (nonatomic) int accessLevel;
@property (nonatomic) int pid;
@property (copy, nonatomic) NSString *signingIdentity;
@property (nonatomic) BOOL entitledForLogging;
@property (nonatomic) BOOL entitledToSkipFileSigningVerification;
@property (nonatomic) BOOL entitledToSkipKeyReleasePrompt;
@property (nonatomic) BOOL entitledToShowBuddy;
@property (readonly, nonatomic) int appAPIVersion;
@property (readonly, copy, nonatomic) ENRegion *appRegion;
@property (readonly, nonatomic) BOOL entitledForDifferentialPrivacy;
@property (readonly, nonatomic) BOOL entitledForTestVerification;

+ (id)clientWithAuditToken:(struct { unsigned int x0[8]; })a0 pid:(int)a1;

- (void)activateWithAppAPIVersion:(int)a0 regionISO:(id)a1;
- (id)description;
- (void).cxx_destruct;

@end
