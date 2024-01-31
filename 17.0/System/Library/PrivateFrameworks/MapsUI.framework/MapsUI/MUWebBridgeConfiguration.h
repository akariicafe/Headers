@class NSString;

@interface MUWebBridgeConfiguration : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *bridgeVersion;
@property (readonly, copy, nonatomic) NSString *nativeControllerName;
@property (readonly, copy, nonatomic) NSString *webControllerName;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithNativeControllerName:(id)a0 webControllerName:(id)a1 bridgeVersion:(id)a2;

@end
