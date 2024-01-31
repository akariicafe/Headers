@class NSString;

@interface VUIActionUpdateUpNext : VUIAction

@property (retain, nonatomic) NSString *state;
@property (retain, nonatomic) NSString *itemID;
@property (nonatomic) BOOL confirmationShouldWaitCompletion;

- (void).cxx_destruct;
- (id)initWithContextData:(id)a0;
- (BOOL)isAccountRequired;
- (void)performWithTargetResponder:(id)a0 completionHandler:(id /* block */)a1;

@end
