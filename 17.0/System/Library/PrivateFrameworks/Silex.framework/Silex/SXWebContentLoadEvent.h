@class NSURL, NSError;

@interface SXWebContentLoadEvent : SXAnalyticsEvent

@property (readonly, copy, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSError *error;

- (id)initWithURL:(id)a0;
- (void).cxx_destruct;

@end
