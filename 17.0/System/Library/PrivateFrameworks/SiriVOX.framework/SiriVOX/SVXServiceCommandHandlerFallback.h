@class NSString, SVXServiceCommandResult;

@interface SVXServiceCommandHandlerFallback : NSObject <SVXServiceCommandHandling> {
    SVXServiceCommandResult *_result;
}

@property (class, readonly, nonatomic) Class supportedCommandClass;

@property (readonly, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
