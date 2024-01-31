@class NSNumber, NSSet;

@interface MTRDistinguishedNameInfo : NSObject <NSCopying> {
    struct ChipDN { struct ChipRDN { struct Span<const char> { char *mDataBuf; unsigned long long mDataLen; } mString; unsigned long long mChipVal; unsigned short mAttrOID; BOOL mAttrIsPrintableString; } rdn[5]; } _dn;
}

@property (readonly) NSNumber *nodeID;
@property (readonly) NSNumber *fabricID;
@property (readonly) NSNumber *rootCACertificateID;
@property (readonly) NSNumber *intermediateCACertificateID;
@property (readonly) NSSet *caseAuthenticatedTags;

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDN:(const void *)a0;

@end
