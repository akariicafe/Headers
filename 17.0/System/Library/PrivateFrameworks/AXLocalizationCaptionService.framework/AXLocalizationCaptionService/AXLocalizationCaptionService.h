@class AXUIClient, NSString;

@interface AXLocalizationCaptionService : NSObject <AXUIClientDelegate>

@property (retain, nonatomic) AXUIClient *client;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)service;
+ (void)startService;
+ (void)_sendMessage:(id)a0 withIdentifier:(unsigned long long)a1 errorHandler:(id /* block */)a2;
+ (void)stopService;

- (void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)a0;
- (id)_clientIdentifier;
- (void).cxx_destruct;

@end
