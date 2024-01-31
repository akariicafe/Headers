@interface PXPhotosDetailsConfiguration : NSObject <NSCopying>

@property (nonatomic) unsigned long long options;
@property (retain, nonatomic) Class barsControllerClass;
@property (copy, nonatomic) id /* block */ unlockDeviceHandler;
@property (copy, nonatomic) id /* block */ unlockDeviceStatus;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
