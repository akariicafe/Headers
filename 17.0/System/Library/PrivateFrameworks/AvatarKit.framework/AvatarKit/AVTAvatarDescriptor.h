@interface AVTAvatarDescriptor : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (unsigned char)classIdentifier;
+ (BOOL)_canLoadDataRepresentationWithVersion:(unsigned short)a0 minimumCompatibleVersion:(unsigned short)a1 error:(id *)a2;
+ (id)_descriptorWithDictionaryRepresentation:(id)a0 error:(id *)a1;
+ (id)_dictionaryRepresentationFromDataRepresentation:(id)a0 error:(id *)a1;
+ (BOOL)canLoadDataRepresentation:(id)a0;
+ (id)dataRepresentationFromUnsecureDataRepresentation:(id)a0 error:(id *)a1;
+ (id)descriptorWithDataRepresentation:(id)a0 error:(id *)a1;
+ (id)descriptorWithURL:(id)a0 error:(id *)a1;

- (id)dataRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionaryRepresentation:(id)a0 error:(id *)a1;
- (void)encodeInDictionaryRepresentation:(id)a0;

@end
