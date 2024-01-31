@class NSArray, NSDictionary, NSString, NSNumber;

@interface DYMTLDeviceProfile : NSObject <DYCapturableObject, DYGraphicsAPIInfo, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long streamRef;
@property (readonly, nonatomic) NSArray *supportedFeatureSets;
@property (readonly, nonatomic) NSArray *supportedGPUFamilies;
@property (readonly, nonatomic) NSDictionary *defaultSamplePositions;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSNumber *registryID;
@property (readonly, nonatomic) NSString *capturableObjectType;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *descriptionForBugReport;

- (void)encodeWithCoder:(id)a0;
- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)supportsCapabilitiesOfGraphicsAPI:(id)a0;

@end
