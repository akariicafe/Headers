@class MTRDistinguishedNameInfo, NSData, NSDate;

@interface MTRCertificateInfo : NSObject <NSCopying> {
    NSData *_bytes;
    struct ChipCertificateData { struct Span<const unsigned char> { char *mDataBuf; unsigned long long mDataLen; } mCertificate; struct ChipDN { struct ChipRDN { struct Span<const char> { char *mDataBuf; unsigned long long mDataLen; } mString; unsigned long long mChipVal; unsigned short mAttrOID; BOOL mAttrIsPrintableString; } rdn[5]; } mSubjectDN; struct ChipDN { struct ChipRDN { struct Span<const char> { char *mDataBuf; unsigned long long mDataLen; } mString; unsigned long long mChipVal; unsigned short mAttrOID; BOOL mAttrIsPrintableString; } rdn[5]; } mIssuerDN; struct FixedSpan<const unsigned char, 20UL> { char *mDataBuf; } mSubjectKeyId; struct FixedSpan<const unsigned char, 20UL> { char *mDataBuf; } mAuthKeyId; unsigned int mNotBeforeTime; unsigned int mNotAfterTime; struct FixedSpan<const unsigned char, 65UL> { char *mDataBuf; } mPublicKey; unsigned short mPubKeyCurveOID; unsigned short mPubKeyAlgoOID; unsigned short mSigAlgoOID; struct BitFlags<chip::Credentials::CertFlags, unsigned short> { unsigned short mValue; } mCertFlags; struct BitFlags<chip::Credentials::KeyUsageFlags, unsigned short> { unsigned short mValue; } mKeyUsageFlags; struct BitFlags<chip::Credentials::KeyPurposeFlags, unsigned char> { unsigned char mValue; } mKeyPurposeFlags; unsigned char mPathLenConstraint; struct FixedSpan<const unsigned char, 64UL> { char *mDataBuf; } mSignature; unsigned char mTBSHash[32]; } _data;
}

@property (readonly) MTRDistinguishedNameInfo *issuer;
@property (readonly) MTRDistinguishedNameInfo *subject;
@property (readonly) NSDate *notBefore;
@property (readonly) NSDate *notAfter;

- (unsigned long long)hash;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTLVBytes:(id)a0;

@end
