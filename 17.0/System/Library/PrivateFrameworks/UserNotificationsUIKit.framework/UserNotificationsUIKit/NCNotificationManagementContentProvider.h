@class UIColor, NSString, NSArray, NCNotificationRequest;
@protocol NCNotificationManagementContentProviderDelegate;

@interface NCNotificationManagementContentProvider : NSObject <NCAuxiliaryOptionsProviding>

@property (retain, nonatomic) NCNotificationRequest *notificationRequest;
@property (weak, nonatomic) id<NCNotificationManagementContentProviderDelegate> managementDelegate;
@property (nonatomic) BOOL auxiliaryOptionsVisible;
@property (readonly, copy, nonatomic) NSString *auxiliaryOptionsSummaryText;
@property (readonly, copy, nonatomic) NSArray *auxiliaryOptionActions;
@property (readonly, copy, nonatomic) UIColor *auxiliaryOptionsTextColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)handleManageAction:(id)a0;
- (id)initWithNotificationRequest:(id)a0 managementDelegate:(id)a1;

@end
