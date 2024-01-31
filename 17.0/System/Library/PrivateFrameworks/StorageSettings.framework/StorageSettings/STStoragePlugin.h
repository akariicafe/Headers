@class NSString, NSArray;

@interface STStoragePlugin : NSObject {
    NSArray *_tips;
    NSString *_identifier;
}

@property (retain) NSString *identifier;
@property (retain) NSArray *tips;

- (void).cxx_destruct;
- (id)documentAppIdentifiers;
- (id)documentSpecifiersForApp:(id)a0;
- (id)externDataSizeAppIdentifiers;
- (long long)externDataSizeForApp:(id)a0;
- (void)reloadSpecifiersForApp:(id)a0;
- (void)notifyUsageChanged;
- (void)reloadTips;

@end
