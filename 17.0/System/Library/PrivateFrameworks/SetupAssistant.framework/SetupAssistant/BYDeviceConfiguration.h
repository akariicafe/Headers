@class NSString;

@interface BYDeviceConfiguration : NSObject <BYDeviceConfiguration>

@property (nonatomic) NSString *productVersion;
@property (nonatomic) NSString *buildVersion;
@property (readonly, nonatomic) BOOL inStoreDemoMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)currentConfiguration;

- (id)init;

@end
