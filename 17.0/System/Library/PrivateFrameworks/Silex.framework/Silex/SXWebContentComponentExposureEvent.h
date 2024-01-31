@class NSString, NSURL;

@interface SXWebContentComponentExposureEvent : SXAnalyticsEvent

@property (readonly, nonatomic) NSString *componentIdentifier;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSString *exposureIdentifier;

- (id)initWithComponent:(id)a0;
- (void).cxx_destruct;

@end
