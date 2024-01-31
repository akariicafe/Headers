@class NSString;

@interface HLPURLSessionACAuthContext : NSObject <NSCopying>

@property (copy, nonatomic) NSString *appIdentifier;
@property (copy, nonatomic) NSString *clientIdentifier;
@property (copy, nonatomic) NSString *enviromentIdentifier;
@property (copy, nonatomic) NSString *interactivityMode;

+ (id)defaultContext;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAppIdentifier:(id)a0 enviromentIdentifier:(id)a1 interactivity:(id)a2;

@end
