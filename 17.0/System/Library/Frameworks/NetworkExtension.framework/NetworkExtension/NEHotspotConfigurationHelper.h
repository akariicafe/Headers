@class NEHelper, NSObject;
@protocol OS_dispatch_queue;

@interface NEHotspotConfigurationHelper : NSObject {
    NEHelper *_helper;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)init;
- (void).cxx_destruct;

@end
