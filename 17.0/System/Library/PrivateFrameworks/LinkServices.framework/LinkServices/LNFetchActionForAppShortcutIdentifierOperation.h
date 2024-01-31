@class NSString, LNAppShortcutActionData;

@interface LNFetchActionForAppShortcutIdentifierOperation : LNInterfaceConnectionOperation

@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) NSString *appShortcutIdentifier;
@property (retain, nonatomic) LNAppShortcutActionData *result;

- (void)start;
- (void).cxx_destruct;
- (void)finishWithError:(id)a0;
- (id)initWithConnectionInterface:(id)a0 appShortcutIdentifier:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;

@end
