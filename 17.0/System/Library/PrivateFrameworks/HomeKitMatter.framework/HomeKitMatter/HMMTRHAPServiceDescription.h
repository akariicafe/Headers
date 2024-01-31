@class NSString, NSArray, NSDictionary, NSNumber;

@interface HMMTRHAPServiceDescription : HMFObject

@property (readonly) NSString *serviceType;
@property (retain) NSNumber *endpoint;
@property (retain) NSString *name;
@property (readonly) NSArray *requiredCharacteristics;
@property (readonly) NSArray *optionalCharacteristics;
@property (readonly) NSDictionary *characteristicFeatureMap;
@property (readonly) BOOL optionalServiceLabelIndexIncluded;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (void)removeCharacteristic:(id)a0;
- (void)addFeatureMapForCharacteristic:(id)a0 featureMap:(id)a1;
- (void)addMandatoryCharacteristic:(id)a0;
- (void)addOptionalCharacteristic:(id)a0;
- (id)initWithType:(id)a0 endpoint:(id)a1 name:(id)a2;
- (id)initWithType:(id)a0 endpoint:(id)a1 name:(id)a2 optionalServiceLabelIndexIncluded:(BOOL)a3;
- (id)padCharacteristicIDWithZeros:(id)a0;

@end
