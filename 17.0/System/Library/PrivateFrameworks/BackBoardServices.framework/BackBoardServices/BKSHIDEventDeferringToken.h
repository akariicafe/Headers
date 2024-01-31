@class NSString;

@interface BKSHIDEventDeferringToken : NSObject <NSSecureCoding, BSProtobufSerializable, BSDescriptionStreamable, NSCopying> {
    unsigned int _CAContextID;
    NSString *_stringIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)protobufSchema;
+ (id)tokenForString:(id)a0;
+ (id)tokenForIdentifierOfCAContext:(unsigned int)a0;

- (id)init;
- (id)didFinishProtobufDecodingWithError:(out id *)a0;
- (id)initForProtobufDecoding;
- (id)_initWithString:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithIdentifier:(unsigned int)a0;
- (BOOL)_isString;
- (void)appendDescriptionToFormatter:(id)a0;
- (void).cxx_destruct;
- (id)_string;
- (unsigned int)_identifierOfCAContext;
- (BOOL)isEqual:(id)a0;
- (BOOL)_isIdentifierOfCAContext;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
