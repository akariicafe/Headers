@class NSData, NSString, INIntent;

@interface CHSIntentReference : NSObject <BSDescriptionStreamable, BSXPCSecureCoding, NSSecureCoding> {
    INIntent *_inMemoryIntent;
    NSData *_intentData;
    NSData *_partialConfigData;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long stableHash;
@property (retain, nonatomic, setter=_setPartialSchemaData:) NSData *_partialSchemaData;
@property (readonly, nonatomic) BOOL _isPartial;
@property (readonly, nonatomic) INIntent *intent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;
+ (id)_decodeFromOPACK:(id)a0 error:(id *)a1;
+ (id)_encodeToOPACK:(id)a0 error:(id *)a1;
+ (id)_schemaDataFromIntent:(id)a0 error:(id *)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (void)appendDescriptionToFormatter:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithIntent:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithIntentData:(id)a0 stableHash:(long long)a1;
- (id)_initWithIntentInMemoryOnly:(id)a0;
- (id)_initWithPartialIntentData:(id)a0 schemaData:(id)a1 stableHash:(long long)a2;
- (id)_typedIntent;
- (id)initWithIntent:(id)a0 encodesSchema:(BOOL)a1;

@end
