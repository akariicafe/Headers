@interface MFDeliveryResult : NSObject

@property (nonatomic) long long status;
@property (nonatomic) double duration;
@property (nonatomic) unsigned long long bytesSent;
@property (nonatomic) BOOL isWifi;
@property (nonatomic) long long attributes;

- (id)description;
- (id)initWithStatus:(long long)a0;

@end
