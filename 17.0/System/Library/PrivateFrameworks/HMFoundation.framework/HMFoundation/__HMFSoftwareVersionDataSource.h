@class NSString, HMFSoftwareVersion;

@interface __HMFSoftwareVersionDataSource : HMFObject <HMFSystemInfoSoftwareVersionDataSource>

@property (readonly, copy, nonatomic) HMFSoftwareVersion *softwareVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
