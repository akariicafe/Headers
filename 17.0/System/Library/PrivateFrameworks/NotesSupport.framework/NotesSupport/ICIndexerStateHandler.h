@class NSString;

@interface ICIndexerStateHandler : NSObject <ICStateHandlerProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)stateDictionary;
+ (void)setStateDictionary:(id)a0;
+ (void)registerStateHandler;
+ (void)logMethodCall:(unsigned long long)a0;


@end
