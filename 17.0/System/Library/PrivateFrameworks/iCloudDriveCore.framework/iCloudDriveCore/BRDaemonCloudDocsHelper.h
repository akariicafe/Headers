@class NSString;

@interface BRDaemonCloudDocsHelper : NSObject <BRCloudDocsHelper>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)queryPathsForPersona:(id)a0 withError:(id *)a1;

@end
