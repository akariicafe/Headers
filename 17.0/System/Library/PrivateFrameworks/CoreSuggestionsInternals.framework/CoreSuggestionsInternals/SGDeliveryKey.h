@class NSString;

@interface SGDeliveryKey : NSObject <SGEntityKey>

@property (readonly, nonatomic) NSString *externalIdentifier;
@property (readonly, nonatomic) unsigned long long provider;
@property (readonly, nonatomic) NSString *trackingNumber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isSupportedEntityType:(long long)a0;

- (id)serialize;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithProvider:(unsigned long long)a0 trackingNumber:(id)a1;
- (id)initWithSerialized:(id)a0;
- (BOOL)isEqualToDeliveryKey:(id)a0;

@end
