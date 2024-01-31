@class CLMiLoServiceMetaInfo, NSArray, NSUUID, CLMiLoLocationType, CLMiLoServiceDescriptor, NSError, CLMiLoServiceQualityInfo;

@interface CLMiLoServiceStatus : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long serviceState;
@property (readonly, nonatomic) NSArray *serviceSuspendReasons;
@property (readonly, nonatomic) CLMiLoServiceDescriptor *serviceDescriptor;
@property (readonly, nonatomic) NSUUID *currentLocationOfInterestUuid;
@property (readonly, nonatomic) CLMiLoLocationType *currentLocationOfInterestType;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) CLMiLoServiceQualityInfo *serviceQualityInfo;
@property (readonly, nonatomic) NSArray *places;
@property (readonly, nonatomic) CLMiLoServiceMetaInfo *metaInfo;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithServiceState:(unsigned long long)a0 suspendReasons:(id)a1 serviceDescriptor:(id)a2 currentLocationOfInterestUuid:(id)a3 currentLocationOfInterestType:(id)a4 error:(id)a5 serviceQualityInfo:(id)a6 places:(id)a7 metaInfo:(id)a8;

@end
