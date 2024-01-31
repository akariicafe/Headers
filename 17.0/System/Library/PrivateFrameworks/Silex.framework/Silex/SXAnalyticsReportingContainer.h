@class NSString;
@protocol SXAnalyticsReporting;

@interface SXAnalyticsReportingContainer : NSObject <SXAnalyticsReportingContainer>

@property (readonly, nonatomic) id<SXAnalyticsReporting> analyticsReporting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)registerAnalyticsReporting:(id)a0;

@end
