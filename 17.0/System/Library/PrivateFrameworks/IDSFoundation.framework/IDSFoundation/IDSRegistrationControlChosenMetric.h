@class NSString, PBCodable;
@protocol NSCopying;

@interface IDSRegistrationControlChosenMetric : NSObject <CUTAWDMetric> {
    long long _registrationType;
}

@property (readonly, nonatomic) long long controlRegistrationType;
@property (readonly, nonatomic) long long registrationControlStatus;
@property (readonly, nonatomic) BOOL isInterestingRegion;
@property (readonly) unsigned int awdIdentifier;
@property (readonly) PBCodable<NSCopying> *awdRepresentation;
@property (readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithControlRegistrationType:(long long)a0 registrationControlStatus:(long long)a1 isInterestingRegion:(BOOL)a2;

@end
