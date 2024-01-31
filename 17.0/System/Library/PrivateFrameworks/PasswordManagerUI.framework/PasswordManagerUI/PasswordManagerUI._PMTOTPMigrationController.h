@class NSArray;

@interface PasswordManagerUI._PMTOTPMigrationController : NSObject {
    void /* unknown type, empty encoding */ totpMigrationModel;
    void /* unknown type, empty encoding */ appState;
    void /* unknown type, empty encoding */ passwordManager;
    void /* unknown type, empty encoding */ migrationURL;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ viewController;
@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic, readonly) long long numberOfCodes;
@property (nonatomic, readonly) NSArray *totpGenerators;

- (id)init;
- (void).cxx_destruct;
- (void)addGenerator:(id)a0 toSavedAccount:(id)a1;
- (id)initWithMigrationURL:(id)a0 delegate:(id)a1;

@end
