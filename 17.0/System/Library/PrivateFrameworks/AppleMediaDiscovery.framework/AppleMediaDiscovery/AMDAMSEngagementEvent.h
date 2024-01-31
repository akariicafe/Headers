@class NSDictionary, NSString;

@interface AMDAMSEngagementEvent : NSObject <AMSEngagementEvent>

@property (retain) NSDictionary *engagementData;
@property (retain) NSDictionary *data;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
