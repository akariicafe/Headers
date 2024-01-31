@class NSXPCConnection;

@interface ATXSleepSuggestionClient : NSObject <ATXSleepSuggestionInterface>

@property (retain, nonatomic) NSXPCConnection *xpcConnection;

- (id)init;
- (void)predictedSleepSuggestionWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end
