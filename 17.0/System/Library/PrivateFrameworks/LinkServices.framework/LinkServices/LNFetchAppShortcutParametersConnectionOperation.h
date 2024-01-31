@class NSArray;

@interface LNFetchAppShortcutParametersConnectionOperation : LNInterfaceConnectionOperation

@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) NSArray *appShortcutSubstitutions;
@property (retain, nonatomic) NSArray *spans;
@property (retain, nonatomic) NSArray *parameterPresentationSubstitutions;

- (void)start;
- (void).cxx_destruct;
- (void)finishWithError:(id)a0;
- (id)initWithConnectionInterface:(id)a0 queue:(id)a1 completionHandler:(id /* block */)a2;

@end
