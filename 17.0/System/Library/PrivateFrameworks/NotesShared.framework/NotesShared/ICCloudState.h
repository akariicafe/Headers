@class ICCloudSyncingObject, NSDate;

@interface ICCloudState : NSManagedObject

@property (nonatomic) BOOL inCloud;
@property (nonatomic) long long latestVersionSyncedToCloud;
@property (nonatomic) long long currentLocalVersion;
@property (retain, nonatomic) NSDate *localVersionDate;
@property (retain, nonatomic) ICCloudSyncingObject *cloudSyncingObject;

- (BOOL)isInCloud;

@end
