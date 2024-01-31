@interface HFAccessorySettingSiriAssetAdapter : HFAccessorySettingAdapter

@property (nonatomic) int status;

- (id)stringForStatus:(unsigned long long)a0;
- (id)initWithHome:(id)a0;
- (unsigned long long)combineStatus:(unsigned long long)a0 withSet:(id)a1;
- (void)statusForIdentifier:(id)a0 replyHandler:(id /* block */)a1;
- (unsigned long long)immediateStatusForIdentifier:(id)a0;

@end
