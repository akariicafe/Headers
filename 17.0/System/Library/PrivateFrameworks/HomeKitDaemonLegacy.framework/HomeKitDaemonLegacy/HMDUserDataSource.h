@class NSString;

@interface HMDUserDataSource : NSObject <HMDUserDataSource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)userDataControllerWithDelegate:(id)a0 dataSource:(id)a1 queue:(id)a2 userID:(id)a3 homeID:(id)a4 sharedSettingsController:(id)a5 privateSettingsController:(id)a6 isCurrentUser:(BOOL)a7;
- (BOOL)isCurrentUser:(id)a0;
- (id)userDataBackingStoreControllerWithDelegate:(id)a0 queue:(id)a1 zoneName:(id)a2 shareMessenger:(id)a3;

@end
