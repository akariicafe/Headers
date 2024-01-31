@class NSLock, NSString, NSDictionary;

@interface ISClient : NSObject

@property (retain, nonatomic) NSLock *lock;
@property (copy) NSString *appleClientApplication;
@property (copy) NSString *userAgent;
@property (readonly) NSString *appleClientVersions;
@property (copy) NSString *identifier;
@property (copy) NSString *partnerHeader;
@property (copy) NSDictionary *clientProvidedHeaders;

+ (id)currentClient;

- (id)init;
- (void)dealloc;
- (id)_appleClientVersions;
- (id)localStoreFrontID;
- (void)_softwareMapInvalidatedNotification:(id)a0;
- (void).cxx_destruct;

@end
