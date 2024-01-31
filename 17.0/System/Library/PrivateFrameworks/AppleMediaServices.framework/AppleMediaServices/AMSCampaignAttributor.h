@class NSURL;

@interface AMSCampaignAttributor : NSObject

@property (nonatomic, readonly) void /* unknown type, empty encoding */ bag;
@property (nonatomic, retain) void /* unknown type, empty encoding */ account;

- (id)init;
- (id)initWithBag:(id)a0;
- (void).cxx_destruct;
- (void)processURL:(NSURL *)a0 ignoreMarketing:(BOOL)a1 completionHandler:(void (^)(NSURL *))a2;

@end
