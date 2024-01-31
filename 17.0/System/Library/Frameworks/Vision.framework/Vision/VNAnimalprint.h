@class NSData, VNRequestSpecifier, NSString;

@interface VNAnimalprint : VNEspressoModelImageprint <VNEntityIdentificationModelPrint, VNSerializingInternal>

@property (readonly, copy) VNRequestSpecifier *VNEntityIdentificationModelPrintOriginatingRequestSpecifier;
@property (readonly) unsigned long long VNEntityIdentificationModelPrintElementCount;
@property (readonly) unsigned long long VNEntityIdentificationModelPrintElementType;
@property (readonly) unsigned long long VNEntityIdentificationModelPrintByteLength;
@property (readonly) NSData *VNEntityIdentificationModelPrintData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) float confidence;
@property (readonly, nonatomic) unsigned long long serializedLength;

+ (id)currentVersion;
+ (BOOL)supportsSecureCoding;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)a0;
+ (unsigned long long)confidenceTypeForRevision:(unsigned long long)a0;
+ (unsigned int)currentCodingVersion;
+ (unsigned long long)currentSerializationVersion;
+ (unsigned long long)serializationMagicNumber;
+ (BOOL)shouldAssumeOriginatingRequestClassForHeaderSerializationVersion:(unsigned int)a0;

- (id)initWithState:(id)a0 error:(id *)a1;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithState:(id)a0 byteOffset:(unsigned long long *)a1 error:(id *)a2;
- (id)initWithData:(const void *)a0 elementCount:(unsigned long long)a1 elementType:(unsigned long long)a2 lengthInBytes:(unsigned long long)a3 confidence:(float)a4 requestRevision:(unsigned long long)a5;
- (BOOL)isEquivalentToVNEntityIdentificationModelPrint:(id)a0;
- (unsigned long long)serializeStateIntoData:(id)a0 startingAtByteOffset:(unsigned long long)a1 error:(id *)a2;

@end
