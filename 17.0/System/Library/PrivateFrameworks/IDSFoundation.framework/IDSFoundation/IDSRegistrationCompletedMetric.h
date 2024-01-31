@class NSString, NSDictionary, PBCodable;
@protocol NSCopying;

@interface IDSRegistrationCompletedMetric : NSObject <CUTCoreAnalyticsMetric, CUTAWDMetric, CUTRTCMetric>

@property (readonly, nonatomic) NSString *name;
@property (readonly) unsigned int awdIdentifier;
@property (readonly, nonatomic) unsigned short rtcType;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) PBCodable<NSCopying> *awdRepresentation;
@property (readonly, nonatomic) int registrationType;
@property (readonly, nonatomic) NSString *serviceIdentifier;
@property (readonly, nonatomic) BOOL wasSuccessful;
@property (readonly, nonatomic) long long registrationError;
@property (readonly, nonatomic) long long circleStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithRegistrationType:(int)a0 serviceIdentifier:(id)a1 wasSuccessful:(BOOL)a2 registrationError:(long long)a3 circleStatus:(long long)a4;

@end
