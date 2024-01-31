@class NSString, NSRecursiveLock;

@interface IMDeviceSupport : NSObject {
    NSString *_model;
    NSString *_productName;
    NSString *_productVersion;
    NSString *_buildVersion;
    NSRecursiveLock *_lock;
}

@property (readonly, nonatomic) NSString *model;
@property (readonly, nonatomic) NSString *userAgentString;
@property (readonly, nonatomic) NSString *productName;
@property (readonly, nonatomic) NSString *productVersion;
@property (readonly, nonatomic) NSString *productBuildVersion;
@property (readonly, nonatomic) NSString *deviceInformationString;

+ (id)sharedInstance;
+ (id)marketingNameForModel:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)_generateProductInformation;

@end
