@protocol PKPaymentOptionsSynchronizationDelegate;

@interface PKPaymentOptionsSynchronization : NSObject

@property (nonatomic) BOOL shouldSyncToCloud;
@property (weak, nonatomic) id<PKPaymentOptionsSynchronizationDelegate> delegate;

+ (BOOL)shouldSyncToCloud;

- (id)init;
- (void)_localeDidChangeNotification:(id)a0;
- (void).cxx_destruct;
- (void)_updateSynchronizationBehavior;

@end
