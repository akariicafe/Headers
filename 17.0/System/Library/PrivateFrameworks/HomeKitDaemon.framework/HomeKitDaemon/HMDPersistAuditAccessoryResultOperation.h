@class NSString;

@interface HMDPersistAuditAccessoryResultOperation : HMDAccessoryBackgroundOperation <HMFLogging>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)predicate;
+ (id)logCategory;

- (id)logIdentifier;
- (BOOL)mainWithError:(id *)a0;

@end
