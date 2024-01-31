@class MKPayload;

@interface MKAnalytics : NSObject

@property (retain, nonatomic) MKPayload *payload;

+ (id)sharedInstance;

- (void)send;
- (id)init;
- (void)reset;
- (void).cxx_destruct;
- (void)createPayload;
- (void)send:(id)a0 payload:(id)a1;

@end
