@protocol CNDonationLoggerProvider;

@interface CNDDonorLoader : NSObject

@property (readonly, nonatomic) id<CNDonationLoggerProvider> loggerProvider;

+ (id)currentExtensionsObservable;
+ (id)extensionAttributes;
+ (id)continuousExtensionsObservable;

- (id)init;
- (void).cxx_destruct;
- (id)donorWithIdentifier:(id)a0;

@end
