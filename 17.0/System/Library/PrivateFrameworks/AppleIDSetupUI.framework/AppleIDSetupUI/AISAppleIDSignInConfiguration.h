@class NSArray, NSString;

@interface AISAppleIDSignInConfiguration : NSObject {
    void /* unknown type, empty encoding */ username;
    void /* unknown type, empty encoding */ serviceTypes;
    void /* unknown type, empty encoding */ privacyLinkIdentifiers;
}

@property (class, nonatomic, readonly) NSArray *defaultServiceTypes;
@property (class, nonatomic, readonly) NSString *defaultPrivacyIdentifier;

@property (nonatomic, copy) NSString *username;
@property (nonatomic) void /* unknown type, empty encoding */ canEditUsername;
@property (nonatomic) void /* unknown type, empty encoding */ allowSkip;
@property (nonatomic) void /* unknown type, empty encoding */ shouldShowSystemBackButton;
@property (nonatomic, copy) NSArray *serviceTypes;
@property (nonatomic) void /* unknown type, empty encoding */ isProximitySetupEnabled;
@property (nonatomic, copy) NSArray *privacyLinkIdentifiers;
@property (nonatomic, retain) void /* unknown type, empty encoding */ aidaServiceContext;
@property (nonatomic) void /* unknown type, empty encoding */ signInFlowType;

- (id)init;
- (void).cxx_destruct;

@end
