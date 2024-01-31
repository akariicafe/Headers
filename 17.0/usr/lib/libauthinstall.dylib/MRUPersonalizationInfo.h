@class NSString, NSDictionary, NSData, MRUHardwareInfo, NSNumber;

@interface MRUPersonalizationInfo : NSObject <NSCoding> {
    NSString *_componentName;
    NSString *_objectName;
    NSNumber *_tagNumber;
}

@property (readonly) NSString *_componentNameSuffix;
@property (readonly) NSString *_propertyNameSuffix;
@property (readonly) MRUHardwareInfo *hardwareInfo;
@property (readonly) NSString *ticketName;
@property (readonly) NSString *tag;
@property (readonly) NSString *objectName;
@property (readonly) NSString *boardIDPropertyName;
@property (readonly) NSString *chipIDPropertyName;
@property (readonly) NSString *ecidPropertyName;
@property (readonly) NSString *noncePropertyName;
@property (readonly) NSString *productionModePropertyName;
@property (readonly) NSString *securityDomainPropertyName;
@property (readonly) NSString *securityModePropertyName;
@property (readonly) NSData *nonce;
@property (readonly) NSDictionary *asDictionary;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithOptions:(id)a0 error:(id *)a1;
- (id)initWithHardwareInfo:(id)a0 componentName:(id)a1 objectName:(id)a2 nonce:(id)a3;
- (id)initWithHardwareInfo:(id)a0 componentName:(id)a1 objectName:(id)a2 nonce:(id)a3 tagNumber:(id)a4;

@end
