@interface VUIDeviceMediaLibrary : VUIMediaLibrary

@property (readonly, nonatomic, getter=isUpdating) BOOL updating;
@property (readonly, nonatomic, getter=isInitialUpdateInProgress) BOOL initialUpdateInProgress;

- (void)updateFromCloudWithReason:(long long)a0;
- (void)updateProgressWithCompletionHandler:(id /* block */)a0;

@end
