@class SNConnectionTypeInternal;

@interface SNConnectionType : NSObject

@property (retain, nonatomic) SNConnectionTypeInternal *underlyingConnectionType;

- (id)description;
- (long long)technology;
- (void).cxx_destruct;
- (BOOL)isEdge;
- (BOOL)canUseWiFiDirectly;
- (id)initWithTechnology:(long long)a0;
- (BOOL)isWWAN;

@end
