@class NSString;

@interface __HMFIOKitDataSource : HMFObject <HMFSystemInfoSerialNumberDataSource, HMFSystemInfoProductInfoDataSource>

@property (readonly, copy, nonatomic) NSString *serialNumber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long productPlatform;
@property (readonly, nonatomic) long long productClass;
@property (readonly, nonatomic) long long productVariant;
@property (readonly, copy, nonatomic) NSString *modelIdentifier;


@end
