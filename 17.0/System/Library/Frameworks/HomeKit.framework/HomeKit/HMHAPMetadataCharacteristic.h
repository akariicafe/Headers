@class NSString;

@interface HMHAPMetadataCharacteristic : NSObject <HMHAPMetadataCharacteristic>

@property (retain, nonatomic) NSString *uuidStr;
@property (retain, nonatomic) NSString *chrDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
