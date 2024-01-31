@class MSSetupViewController, MSServiceAccount;
@protocol MSAuthenticationPresentationContext;

@interface MSSetupSession : NSObject

@property (readonly, nonatomic) unsigned long long testFlags;
@property (readonly, retain, nonatomic) MSSetupViewController *viewController;
@property (weak, nonatomic) id<MSAuthenticationPresentationContext> presentationContext;
@property (readonly, nonatomic) MSServiceAccount *account;

- (BOOL)startWithError:(id *)a0;
- (void).cxx_destruct;
- (id)initWithServiceAccount:(id)a0;
- (id)initWithServiceAccount:(id)a0 test:(unsigned long long)a1;

@end
