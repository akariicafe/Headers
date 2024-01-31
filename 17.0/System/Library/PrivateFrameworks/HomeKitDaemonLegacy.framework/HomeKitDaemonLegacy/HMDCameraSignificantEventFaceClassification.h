@class NSUUID, NSString;

@interface HMDCameraSignificantEventFaceClassification : HMFObject <NSCopying, NSMutableCopying>

@property (copy) NSUUID *personUUID;
@property (copy) NSString *personName;
@property (copy) NSUUID *unassociatedFaceCropUUID;
@property (readonly, copy) NSUUID *UUID;
@property (readonly, copy) NSUUID *personManagerUUID;

+ (id)faceClassificationWithHMIFaceClassification:(id)a0 person:(id)a1;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithUUID:(id)a0 personManagerUUID:(id)a1;

@end
