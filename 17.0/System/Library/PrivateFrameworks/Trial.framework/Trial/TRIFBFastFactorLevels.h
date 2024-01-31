@class NSArray, NSDictionary, NSString, NSData, AFBBufRef;

@interface TRIFBFastFactorLevels : NSObject <AFBBufferReferencing, NSCopying> {
    AFBBufRef *_br;
    const struct FastFactorLevels { unsigned char x0[1]; } *_ptr;
}

@property (readonly, nonatomic) NSArray *levels;
@property (readonly, nonatomic) NSDictionary *levelsAsDict;
@property (readonly, nonatomic) unsigned char sourceType;
@property (readonly, nonatomic) NSString *sourceAsTreatmentId;
@property (readonly, nonatomic) const char *sourceAsTreatmentIdCString;
@property (readonly, nonatomic) NSData *sourceAsTreatmentIdData;
@property (readonly, nonatomic) NSString *sourceAsFactorPackId;
@property (readonly, nonatomic) const char *sourceAsFactorPackIdCString;
@property (readonly, nonatomic) NSData *sourceAsFactorPackIdData;
@property (readonly, nonatomic) NSString *namespaceName;
@property (readonly, nonatomic) const char *namespaceNameAsCString;
@property (readonly, nonatomic) NSData *namespaceNameAsData;
@property (readonly, nonatomic) NSArray *ncvs;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initVerifiedRootObjectFromData:(id)a0;
- (id)deepCopyUsingBufferBuilder:(id)a0;
- (id)deepCopyUsingBufferBuilder:(id)a0 changes:(id)a1;
- (BOOL)enumerateNcvsUsingBlock:(id /* block */)a0;
- (id)initVerifiedRootObjectFromData:(id)a0 requireUTF8:(BOOL)a1;
- (id)initVerifiedRootObjectFromData:(id)a0 requireUTF8:(BOOL)a1 maxDepth:(unsigned int)a2 maxTables:(unsigned int)a3;
- (id)initWithBufRef:(id)a0 cppPointer:(const struct FastFactorLevels { unsigned char x0[1]; } *)a1;
- (id)initWithBufRef:(id)a0 rawPointer:(const void *)a1;
- (const unsigned int *)ncvsAsCArrayWithCount:(unsigned long long *)a0;
- (BOOL)verifyUTF8Fields;

@end
