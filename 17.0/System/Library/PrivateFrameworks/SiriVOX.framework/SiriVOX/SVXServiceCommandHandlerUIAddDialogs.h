@class NSString, NSDictionary;
@protocol MDModeProviding;

@interface SVXServiceCommandHandlerUIAddDialogs : NSObject <SVXServiceCommandHandling> {
    NSDictionary *_handlersByCommandType;
    id<MDModeProviding> _modeProvider;
}

@property (class, readonly, nonatomic) Class supportedCommandClass;

@property (readonly, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)handleCommand:(id)a0 withContext:(id)a1 taskTracker:(id)a2 completion:(id /* block */)a3;
- (id)initWithHandlers:(id)a0 modeProvider:(id)a1;
- (BOOL)isCommandUUFR:(id)a0;
- (void)prepareToHandleCommand:(id)a0 completion:(id /* block */)a1;
- (BOOL)shouldDependOnCommand:(id)a0;

@end
