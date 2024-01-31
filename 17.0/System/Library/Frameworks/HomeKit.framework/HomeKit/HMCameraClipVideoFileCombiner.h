@class NSArray, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface HMCameraClipVideoFileCombiner : NSObject <HMFLogging>

@property (readonly, copy) NSArray *videoFileURLs;
@property (readonly, copy) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

@end
