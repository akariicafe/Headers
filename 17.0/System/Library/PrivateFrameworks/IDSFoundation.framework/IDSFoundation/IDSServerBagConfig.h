@class NSString, NSDictionary, NSURL, NSObject;
@protocol OS_os_log;

@interface IDSServerBagConfig : NSObject

@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSString *defaultsDomain;
@property (readonly, nonatomic) NSDictionary *defaultBag;
@property (readonly, nonatomic) NSString *apsEnvironmentName;
@property (readonly, nonatomic) unsigned long long sosDomain;
@property (readonly, nonatomic) char hashAlgorithm;
@property (readonly, nonatomic) BOOL requiresIDSHost;
@property (readonly, nonatomic) long long bagType;
@property (readonly, nonatomic) BOOL bypassProcessChecks;
@property (readonly, nonatomic) NSObject<OS_os_log> *logCategory;

+ (id)IDSConfig;
+ (id)courierConfig;

- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithURL:(id)a0 defaultsDomain:(id)a1 defaultBag:(id)a2 apsEnvironmentName:(id)a3 sosDomain:(unsigned long long)a4 hashAlgorithm:(char)a5 requiresIDSHost:(BOOL)a6 bagType:(long long)a7 bypassProcessChecks:(BOOL)a8 logCategory:(id)a9;

@end
