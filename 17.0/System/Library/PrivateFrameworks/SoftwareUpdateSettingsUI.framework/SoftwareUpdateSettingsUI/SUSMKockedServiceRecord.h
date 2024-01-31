@class NSString;

@interface SUSMKockedServiceRecord : NSObject

@property (readonly, nonatomic) long long serviceType;
@property (readonly, nonatomic) NSString *resolvedServiceClassName;
@property (readonly, nonatomic) Class mockedServiceClass;

- (id)init;
- (void).cxx_destruct;
- (id)initWithServiceType:(long long)a0 resolvingService:(Class)a1 usingMockedClass:(Class)a2;

@end
