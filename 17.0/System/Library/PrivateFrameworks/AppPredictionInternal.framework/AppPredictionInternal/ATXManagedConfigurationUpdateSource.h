@class MCProfileConnection;
@protocol ATXUpdatePredictionsDelegate;

@interface ATXManagedConfigurationUpdateSource : NSObject <ATXUpdatePredictionsSource> {
    id _restrictionChangedNotificationToken;
}

@property (weak, nonatomic) id<ATXUpdatePredictionsDelegate> delegate;
@property (retain, nonatomic) MCProfileConnection *profileConnection;

- (id)init;
- (void)_registerForRestrictionChangedNotifications;
- (void).cxx_destruct;
- (id)initWithProfileConnection:(id)a0;
- (void)handleProfileChangedNotification;

@end
