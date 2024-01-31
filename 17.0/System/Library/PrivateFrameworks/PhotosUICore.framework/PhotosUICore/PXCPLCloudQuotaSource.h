@interface PXCPLCloudQuotaSource : PXObservable

@property (readonly, nonatomic) long long state;

- (id)init;
- (void)setState:(long long)a0;
- (void)_handleInAppMessage:(id)a0;
- (void)currentInAppMessageDidChange:(id)a0;

@end
