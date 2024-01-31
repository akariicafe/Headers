@class NSString;

@interface TPSCloudDeviceInfo : TPSSerializableObject

@property (copy, nonatomic) NSString *model;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *minOSVersion;
@property (copy, nonatomic) NSString *maxOSVersion;
@property (copy, nonatomic) NSString *symbolIdentifier;

- (id)initWithModel:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)debugDescription;

@end
