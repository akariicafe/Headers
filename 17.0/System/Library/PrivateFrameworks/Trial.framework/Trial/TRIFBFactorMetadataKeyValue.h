@class NSString, NSData, AFBBufRef;

@interface TRIFBFactorMetadataKeyValue : NSObject <AFBBufferReferencing, NSCopying> {
    AFBBufRef *_br;
    const struct FactorMetadataKeyValue { unsigned char x0[1]; } *_ptr;
}

@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) const char *keyAsCString;
@property (readonly, nonatomic) NSData *keyAsData;
@property (readonly, nonatomic) NSString *val;
@property (readonly, nonatomic) const char *valAsCString;
@property (readonly, nonatomic) NSData *valAsData;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initVerifiedRootObjectFromData:(id)a0;
- (id)deepCopyUsingBufferBuilder:(id)a0;
- (id)deepCopyUsingBufferBuilder:(id)a0 changes:(id)a1;
- (id)initVerifiedRootObjectFromData:(id)a0 requireUTF8:(BOOL)a1;
- (id)initVerifiedRootObjectFromData:(id)a0 requireUTF8:(BOOL)a1 maxDepth:(unsigned int)a2 maxTables:(unsigned int)a3;
- (id)initWithBufRef:(id)a0 cppPointer:(const struct FactorMetadataKeyValue { unsigned char x0[1]; } *)a1;
- (id)initWithBufRef:(id)a0 rawPointer:(const void *)a1;
- (BOOL)verifyUTF8Fields;

@end
