@class NSMutableDictionary;

@interface CRAttestationBaseDeviceHandler : NSObject <CRAttestationProtocol>

@property (retain, nonatomic) NSMutableDictionary *componentsMapping;

+ (id)getDeviceHandlerForProductType:(int)a0;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)challengeComponentsWith:(id)a0 withReply:(id /* block */)a1;
- (void)getStrongComponentsWithReply:(id /* block */)a0;

@end
