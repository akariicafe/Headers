@class NSString, SVXSessionManager, SVXModule;

@interface _SVXServiceCommandHandlerSmsPlayAudio : NSObject <SVXServiceCommandHandling> {
    SVXSessionManager *_sessionManager;
    SVXModule *_module;
}

@property (class, readonly, nonatomic) Class supportedCommandClass;

@property (readonly, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
