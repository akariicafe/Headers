@class NSString, NSDictionary, NSData, DMFControlSessionIdentifier;

@interface CRKInstructor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) DMFControlSessionIdentifier *sessionIdentifier;
@property (copy, nonatomic) NSString *userIdentifier;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *courseName;
@property (retain, nonatomic) NSData *imageData;
@property (nonatomic) BOOL disallowsClassroomAirDropOverLocalNetwork;
@property (nonatomic) BOOL allowsStudentInitiatedDisconnection;
@property (nonatomic, getter=isObservingStudentScreen) BOOL observingStudentScreen;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToInstructor:(id)a0;

@end
