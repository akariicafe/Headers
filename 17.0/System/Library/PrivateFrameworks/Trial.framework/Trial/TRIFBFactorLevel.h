@class NSData, NSString, TRIFBBoxedInt64, TRIFBBoxedDouble, NSArray, NSDictionary, AFBBufRef, TRIFBMobileAssetReference, TRIFBTrialManagedAsset, TRIFBBoxedBool;

@interface TRIFBFactorLevel : NSObject <AFBBufferReferencing, NSCopying> {
    AFBBufRef *_br;
    const struct FactorLevel { unsigned char x0[1]; } *_ptr;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) const char *nameAsCString;
@property (readonly, nonatomic) NSData *nameAsData;
@property (readonly, nonatomic) unsigned char levelType;
@property (readonly, nonatomic) TRIFBBoxedBool *levelAsBoolVal;
@property (readonly, nonatomic) NSString *levelAsStringVal;
@property (readonly, nonatomic) const char *levelAsStringValCString;
@property (readonly, nonatomic) NSData *levelAsStringValData;
@property (readonly, nonatomic) TRIFBBoxedInt64 *levelAsInt64Val;
@property (readonly, nonatomic) TRIFBBoxedDouble *levelAsDoubleVal;
@property (readonly, nonatomic) TRIFBTrialManagedAsset *levelAsTrialAssetVal;
@property (readonly, nonatomic) TRIFBMobileAssetReference *levelAsMaRefVal;
@property (readonly, nonatomic) NSArray *metadata;
@property (readonly, nonatomic) NSDictionary *metadataAsDict;
@property (readonly, nonatomic) BOOL hasCacheKey;
@property (readonly, nonatomic) unsigned int cacheKey;
@property (readonly, nonatomic) NSString *alias;
@property (readonly, nonatomic) const char *aliasAsCString;
@property (readonly, nonatomic) NSData *aliasAsData;
@property (readonly, nonatomic) NSString *factorNamespaceName;
@property (readonly, nonatomic) const char *factorNamespaceNameAsCString;
@property (readonly, nonatomic) NSData *factorNamespaceNameAsData;
@property (readonly, nonatomic) NSString *factorId;
@property (readonly, nonatomic) const char *factorIdAsCString;
@property (readonly, nonatomic) NSData *factorIdAsData;
@property (readonly, nonatomic) BOOL hasNamespaceId;
@property (readonly, nonatomic) unsigned int namespaceId;

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
- (id)initWithBufRef:(id)a0 cppPointer:(const struct FactorLevel { unsigned char x0[1]; } *)a1;
- (id)initWithBufRef:(id)a0 rawPointer:(const void *)a1;
- (BOOL)verifyUTF8Fields;

@end
