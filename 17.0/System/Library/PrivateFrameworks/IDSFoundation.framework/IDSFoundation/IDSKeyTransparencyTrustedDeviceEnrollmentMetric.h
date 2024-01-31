@class NSString, NSDictionary;

@interface IDSKeyTransparencyTrustedDeviceEnrollmentMetric : NSObject <CUTRTCMetric>

@property (readonly, nonatomic) unsigned long long keyTransparencyVersion;
@property (readonly, nonatomic) BOOL cloudKitSuccess;
@property (readonly, nonatomic) NSString *cloudKitErrorDomain;
@property (readonly, nonatomic) long long cloudKitErrorCode;
@property (readonly, nonatomic) NSString *cloudKitUnderlyingErrorDomain;
@property (readonly, nonatomic) long long cloudKitUnderlyingErrorCode;
@property (readonly, nonatomic) double cloudKitOperationTimeInterval;
@property (readonly, nonatomic) BOOL accountKeySuccess;
@property (readonly, nonatomic) NSString *accountKeyErrorDomain;
@property (readonly, nonatomic) long long accountKeyErrorCode;
@property (readonly, nonatomic) NSString *accountKeyUnderlyingErrorDomain;
@property (readonly, nonatomic) long long accountKeyUnderlyingErrorCode;
@property (readonly, nonatomic) double accountKeyOperationTimeInterval;
@property (readonly, nonatomic) BOOL isKVSMetric;
@property (readonly, nonatomic) BOOL kvsSuccess;
@property (readonly, nonatomic) NSString *kvsErrorDomain;
@property (readonly, nonatomic) long long kvsErrorCode;
@property (readonly, nonatomic) double kvsSyncTimeInterval;
@property (readonly, nonatomic) NSString *kvsUnderlyingErrorDomain;
@property (readonly, nonatomic) long long kvsUnderlyingErrorCode;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned short rtcType;
@property (readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
