@class NSSet, NSString, NSData, NSNumber;

@interface RMModelStatusSecurityCertificateList : RMModelStatusBase

@property (class, readonly, copy) NSSet *allowedStatusKeys;

@property (copy, nonatomic) NSString *statusIdentifier;
@property (copy, nonatomic) NSNumber *statusRemoved;
@property (copy, nonatomic) NSString *statusDeclarationIdentifier;
@property (copy, nonatomic) NSString *statusSubjectSummary;
@property (copy, nonatomic) NSNumber *statusIsIdentity;
@property (copy, nonatomic) NSData *statusData;

+ (id)buildRequiredOnlyWithIdentifier:(id)a0 subjectSummary:(id)a1 isIdentity:(id)a2 data:(id)a3;
+ (id)buildWithIdentifier:(id)a0 removed:(id)a1 declarationIdentifier:(id)a2 subjectSummary:(id)a3 isIdentity:(id)a4 data:(id)a5;
+ (BOOL)isArrayValue;
+ (id)statusItemType;
+ (id)supportedOS;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayloadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializePayloadWithType:(short)a0;

@end
