@class NSString;

@interface HMDResidentSyncClientDefaultDataSource : NSObject <HMDResidentSyncClientDataSource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performWithDelay:(unsigned int)a0 block:(id /* block */)a1;

@end
