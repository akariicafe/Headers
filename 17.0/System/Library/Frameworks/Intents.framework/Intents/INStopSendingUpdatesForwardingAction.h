@interface INStopSendingUpdatesForwardingAction : INIntentForwardingAction

+ (Class)responseClass;

- (BOOL)executeRemotelyWithVendorRemote:(id)a0 completionHandler:(id /* block */)a1;
- (void)executeLocallyWithIntentDeliverer:(id)a0 completionHandler:(id /* block */)a1;

@end
