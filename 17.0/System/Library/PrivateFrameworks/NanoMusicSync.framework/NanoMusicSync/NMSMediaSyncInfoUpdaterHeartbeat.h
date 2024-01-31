@class NSString, NSObject;
@protocol OS_dispatch_source;

@interface NMSMediaSyncInfoUpdaterHeartbeat : NSObject {
    NSObject<OS_dispatch_source> *_currentSyncInfoRequestDateTimer;
    NSString *_bundleIdentifier;
}

- (void)dealloc;
- (void)start;
- (void)stop;
- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0;

@end
