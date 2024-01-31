@class NSDate;

@interface HDCloudSyncStatus : NSObject

@property (retain, nonatomic) NSDate *lastSuccessfulPullDate;
@property (retain, nonatomic) NSDate *lastSuccessfulPushDate;
@property (retain, nonatomic) NSDate *lastSuccessfulLitePushDate;

- (void).cxx_destruct;

@end
