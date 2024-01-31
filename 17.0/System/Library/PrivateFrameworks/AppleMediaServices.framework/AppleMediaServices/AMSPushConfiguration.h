@class NSString, NSSet;
@protocol AMSPushHandlerDelegate;

@interface AMSPushConfiguration : NSObject

@property (weak, nonatomic) id<AMSPushHandlerDelegate> delegate;
@property (retain, nonatomic) NSString *engagementPushTopic;
@property (retain, nonatomic) NSString *userNotificationExtensionId;
@property (retain, nonatomic) NSSet *enabledActionTypes;

- (id)initWithEnabledActionTypes:(id)a0;
- (void).cxx_destruct;

@end
