@class NSString;

@interface VSAppInstallMetadata : NSObject

@property (nonatomic, getter=isBeta) BOOL beta;
@property (retain, nonatomic) NSString *sourceApp;
@property (nonatomic, getter=isProfileValidated) BOOL profileValidated;
@property (nonatomic, getter=isManaged) BOOL managed;
@property (readonly, nonatomic) long long installSource;

- (id)init;
- (void).cxx_destruct;
- (id)initWithApplicationRecord:(id)a0;

@end
