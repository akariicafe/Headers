@class NSSet, NSObject;
@protocol OS_dispatch_queue;

@interface ATXMediaApplications : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSSet *_mediaApps;
}

- (id)init;
- (void)_updateMediaApps;
- (void).cxx_destruct;
- (BOOL)appSupportsMedia:(id)a0;

@end
