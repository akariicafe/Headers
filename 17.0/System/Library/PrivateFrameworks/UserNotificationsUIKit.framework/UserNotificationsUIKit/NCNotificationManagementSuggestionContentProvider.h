@class NSString, NSArray, UIColor;
@protocol NCNotificationManagementSuggestionDelegate;

@interface NCNotificationManagementSuggestionContentProvider : NCNotificationManagementContentProvider <NCSuggestionContentProviding>

@property (weak, nonatomic) id<NCNotificationManagementSuggestionDelegate> suggestionDelegate;
@property (copy, nonatomic) NSString *auxiliaryOptionsSummaryText;
@property (nonatomic) BOOL auxiliaryOptionsVisible;
@property (readonly, copy, nonatomic) NSArray *auxiliaryOptionActions;
@property (readonly, copy, nonatomic) UIColor *auxiliaryOptionsTextColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithNotificationRequest:(id)a0 bundleDisplayName:(id)a1 managementDelegate:(id)a2 suggestionDelegate:(id)a3;

@end
