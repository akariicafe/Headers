@interface RTNetworkOfInterestManagerCellLinkQualityChangedNotification : RTNotification

@property (readonly, nonatomic) unsigned long long linkQuality;

- (id)initWithLinkQuality:(unsigned long long)a0;

@end
