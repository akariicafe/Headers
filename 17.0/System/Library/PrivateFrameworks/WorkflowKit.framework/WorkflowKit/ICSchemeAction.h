@class NSString, ICScheme;

@interface ICSchemeAction : ICAction

@property (readonly, nonatomic) NSString *formatString;
@property (readonly, weak, nonatomic) ICScheme *scheme;
@property (readonly, nonatomic, getter=isCallbackAction) BOOL callbackAction;

- (void).cxx_destruct;
- (id)defersCompletionUntilReturn;
- (id)formatKeys;
- (id)initWithDefinition:(id)a0 scheme:(id)a1;
- (void)performActionWithInput:(id)a0 parameters:(id)a1 userInterface:(id)a2 successHandler:(id /* block */)a3 errorHandler:(id /* block */)a4;

@end
