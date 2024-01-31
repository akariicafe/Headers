@class NSXPCConnection;

@interface ATXDefaultWidgetSuggesterClient : NSObject {
    NSXPCConnection *_xpcConnection;
}

+ (BOOL)shouldSuggestTVWithAppLaunchCount:(double)a0 intentDonationCount:(double)a1 upcomingMediaCount:(double)a2;

- (id)init;
- (void).cxx_destruct;
- (void)defaultWidgetSuggestionOfType:(long long)a0 completionHandler:(id /* block */)a1;
- (void)logEventForDefaultWidgetSuggestionType:(long long)a0 event:(long long)a1;

@end
