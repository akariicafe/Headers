@class NSString, NSURL, NSNumber;

@interface ASTEnvironment : NSObject

@property (retain, nonatomic) NSString *diagsChannel;
@property (nonatomic) unsigned long long environmentType;
@property (nonatomic) unsigned long long server;
@property (retain, nonatomic) NSURL *serverURL;
@property (retain, nonatomic) NSString *SOCKSProxyServer;
@property (retain, nonatomic) NSNumber *SOCKSProxyPort;

+ (id)currentEnvironment;
+ (BOOL)isInternalBuild;
+ (id)environmentWithEnvironmentType:(unsigned long long)a0;
+ (void)resetEnvironment;

- (id)init;
- (void).cxx_destruct;
- (id)_defaultServerURL;
- (unsigned long long)_defaultServerSelection;
- (id)_environmentServerString;
- (id)_generateServerURL;
- (id)initWithEnvironmentType:(unsigned long long)a0;

@end
