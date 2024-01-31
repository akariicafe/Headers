@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface _SFSafariDataSharingController : NSObject {
    NSObject<OS_dispatch_queue> *_dataSharingQueue;
    NSMutableArray *_appBundlesWithSeparateData;
}

+ (id)sharedController;

- (id)init;
- (void).cxx_destruct;
- (void)_loadAppBundlesWithSeparateDataIfNeeded;
- (void)checkInAppBundleIDIfNeeded:(id)a0;
- (void)clearAllWebsitesData;
- (id)systemDataContainerURLWithAppBundleID:(id)a0;

@end
