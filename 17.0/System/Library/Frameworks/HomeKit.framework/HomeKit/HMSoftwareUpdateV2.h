@class NSString, NSArray, NSError, HMFSoftwareVersion, HMSoftwareUpdateDocumentationMetadata;

@interface HMSoftwareUpdateV2 : NSObject <HMFObject, NSCopying>

@property long long status;
@property (retain) NSError *error;
@property (retain) HMSoftwareUpdateDocumentationMetadata *documentationMetadata;
@property (retain) HMFSoftwareVersion *version;
@property unsigned long long downloadSize;
@property (copy) NSString *humanReadableUpdateName;
@property BOOL rampFeatureEnabledOnServer;
@property (readonly) float percentageComplete;
@property (readonly) double estimatedTimeRemaining;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithStatus:(long long)a0 error:(id)a1 documentationMetadata:(id)a2 version:(id)a3 downloadSize:(unsigned long long)a4 humanReadableUpdateName:(id)a5 rampFeatureEnabledOnServer:(BOOL)a6;

@end
