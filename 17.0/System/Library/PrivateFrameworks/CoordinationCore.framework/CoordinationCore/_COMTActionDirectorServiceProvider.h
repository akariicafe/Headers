@class NSString;

@interface _COMTActionDirectorServiceProvider : NSObject <COMTActionDirectorServiceProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)clusterRoleMonitorWithCluster:(id)a0;
- (id)messageChannelWithTopic:(id)a0 cluster:(id)a1;

@end
