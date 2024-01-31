@class NSURL;

@interface PKQuotaNotification : PKNotification

@property (retain) NSURL *quotaURL;

- (void).cxx_destruct;
- (void)_interpretResult:(unsigned long long)a0 responseDict:(id)a1;

@end
