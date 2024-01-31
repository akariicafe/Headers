@protocol MTLDevice;

@interface MLMetalDeviceChangeInfo : NSObject

@property (readonly, nonatomic) id<MTLDevice> metalDevice;
@property (readonly, nonatomic) long long changeType;

- (void).cxx_destruct;
- (id)initWithMetalDevice:(id)a0 changeType:(long long)a1;

@end
