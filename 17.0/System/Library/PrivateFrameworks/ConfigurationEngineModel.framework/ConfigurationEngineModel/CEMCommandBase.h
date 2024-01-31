@class NSString, NSNumber, CEMAnyPayload;

@interface CEMCommandBase : CEMPayloadBase

@property (copy, nonatomic) NSString *commandType;
@property (copy, nonatomic) NSString *commandIdentifier;
@property (copy, nonatomic) NSString *commandDescription;
@property (copy, nonatomic) NSNumber *commandRequiresNetworkTether;
@property (copy, nonatomic) CEMAnyPayload *commandPayload;

+ (id)commandForData:(id)a0 error:(id *)a1;
+ (id)commandForPayload:(id)a0 error:(id *)a1;

- (id)serialize;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)serializeAsDataWithError:(id *)a0;
- (int)executionLevel;
- (BOOL)loadCommandFromDictionary:(id)a0 error:(id *)a1;
- (BOOL)mustBeSupervised;

@end
