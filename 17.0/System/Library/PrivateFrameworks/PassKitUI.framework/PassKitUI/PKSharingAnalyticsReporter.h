@class NSData, NSString;

@interface PKSharingAnalyticsReporter : NSObject {
    NSString *_subject;
    BOOL _isSessionOwned;
}

@property (readonly, nonatomic) NSData *sessionToken;

- (id)init;
- (void)dealloc;
- (void)sendEvent:(id)a0;
- (void).cxx_destruct;
- (id)initWithSubject:(id)a0 sessionToken:(id)a1 reuseExistingSession:(BOOL)a2;

@end
