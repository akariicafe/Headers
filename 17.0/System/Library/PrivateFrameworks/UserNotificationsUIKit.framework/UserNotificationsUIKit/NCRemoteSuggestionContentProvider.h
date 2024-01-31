@class NSUUID;

@interface NCRemoteSuggestionContentProvider : NCNotificationManagementSuggestionContentProvider

@property (readonly, copy, nonatomic) NSUUID *uuid;

- (void).cxx_destruct;
- (id)initWithNotificationRequest:(id)a0 bundleDisplayName:(id)a1 managementDelegate:(id)a2 suggestionDelegate:(id)a3 uuid:(id)a4;

@end
