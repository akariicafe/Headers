@class NSArray, NSString;

@interface IMDAskToBuyNotificationContext : NSObject <IMDNotificationContextProtocol>

@property (copy, nonatomic) NSArray *actions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
