@interface HMDCarPlayDataSource : HMFObject <HMDCarPlayDataSource>

- (BOOL)synchronouslyFetchIsCarPlayConnectedStatus;
- (BOOL)synchronouslyFetchIsCarPlayConnectedWirelessly;

@end
