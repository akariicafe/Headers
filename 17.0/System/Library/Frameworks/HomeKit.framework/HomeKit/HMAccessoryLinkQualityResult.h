@class NSString;

@interface HMAccessoryLinkQualityResult : NSObject

@property (readonly, nonatomic) BOOL supported;
@property (readonly, nonatomic) unsigned long long linkLayerType;
@property (readonly, copy, nonatomic) NSString *macAddress;
@property (readonly, copy, nonatomic) NSString *networkName;
@property (readonly, nonatomic) unsigned long long linkQuality;

- (void).cxx_destruct;
- (id)initWithLinkQualitySupported:(BOOL)a0 linkLayerType:(unsigned long long)a1 macAddress:(id)a2 networkName:(id)a3 linkQuality:(unsigned long long)a4;

@end
