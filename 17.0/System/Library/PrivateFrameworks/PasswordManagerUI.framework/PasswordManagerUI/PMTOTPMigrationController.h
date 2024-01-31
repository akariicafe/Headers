@class NSArray, UIViewController, _TtC17PasswordManagerUI26_PMTOTPMigrationController;
@protocol PMTOTPMigrationControllerDelegate;

@interface PMTOTPMigrationController : NSObject <PasswordManagerUI._PMTOTPMigrationControllerDelegate> {
    _TtC17PasswordManagerUI26_PMTOTPMigrationController *_controller;
}

@property (weak, nonatomic) id<PMTOTPMigrationControllerDelegate> delegate;
@property (readonly, nonatomic) UIViewController *viewController;
@property (readonly, nonatomic) long long numberOfCodes;
@property (readonly, nonatomic) NSArray *totpGenerators;

- (void).cxx_destruct;
- (void)addGenerator:(id)a0 toSavedAccount:(id)a1;
- (id)initWithMigrationURL:(id)a0;
- (void)totpMigrationController:(id)a0 presentDetailsForSavedAccount:(id)a1;
- (void)totpMigrationController:(id)a0 presentPickerForGenerator:(id)a1;
- (void)totpMigrationControllerFinishedImport:(id)a0;

@end
