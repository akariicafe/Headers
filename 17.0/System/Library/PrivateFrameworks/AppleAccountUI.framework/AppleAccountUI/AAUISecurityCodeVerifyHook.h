@class RUIObjectModel, NSString, RUIServerHookResponse;
@protocol RUIServerHookDelegate;

@interface AAUISecurityCodeVerifyHook : NSObject <RUIServerHook>

@property (retain, nonatomic) RUIServerHookResponse *serverHookResponse;
@property (retain, nonatomic) RUIObjectModel *objectModel;
@property (weak, nonatomic) id<RUIServerHookDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
