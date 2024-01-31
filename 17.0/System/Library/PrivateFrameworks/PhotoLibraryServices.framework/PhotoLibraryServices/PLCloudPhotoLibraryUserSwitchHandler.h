@class NSString;
@protocol PLCloudUserSessionHandling;

@interface PLCloudPhotoLibraryUserSwitchHandler : NSObject <UMUserSwitchStakeholder>

@property (retain) id<PLCloudUserSessionHandling> sessionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
