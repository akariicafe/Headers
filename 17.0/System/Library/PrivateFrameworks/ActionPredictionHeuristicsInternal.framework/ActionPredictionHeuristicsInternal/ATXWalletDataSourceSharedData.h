@class NSDate;

@interface ATXWalletDataSourceSharedData : NSObject {
    BOOL _hasEmptyWalletPasses;
    NSDate *_lastWalletPassCheckDate;
}

+ (id)sharedInstance;

- (void)setHasEmptyWalletPasses:(BOOL)a0;
- (id)init;
- (BOOL)hasEmptyWalletPasses;
- (void)_passesDidChange;
- (void).cxx_destruct;

@end
