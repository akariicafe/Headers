@class NSString, TransparencyApplication;

@interface KTOptInManager : NSObject

@property (retain) TransparencyApplication *application;
@property (readonly) NSString *applicationIdentifier;

+ (void)getOptInState:(id)a0 completion:(id /* block */)a1;
+ (id)notificationKeyForApplication:(id)a0;

- (id)initWithApplication:(id)a0;
- (void).cxx_destruct;
- (void)changeOptInState:(unsigned long long)a0 detailedCompletionBlock:(id /* block */)a1;
- (BOOL)getOptInState;
- (void)getOptInState:(BOOL)a0 completionBlock:(id /* block */)a1;
- (void)getOptInStateWithSync:(id /* block */)a0;
- (void)setOptInState:(BOOL)a0 completionBlock:(id /* block */)a1;
- (void)setOptInState:(BOOL)a0 detailedCompletionBlock:(id /* block */)a1;

@end
