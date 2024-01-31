@class NSData, CKDPRecordIdentifier, NSNumber;

@interface CKDAssetID : NSObject <NSCopying>

@property (readonly, copy, nonatomic) CKDPRecordIdentifier *recordID;
@property (readonly, copy, nonatomic) NSData *fileSignature;
@property (readonly, copy, nonatomic) NSData *referenceSignature;
@property (readonly, copy, nonatomic) NSNumber *size;

- (unsigned long long)hash;
- (id)initWithRecordID:(id)a0 fileSignature:(id)a1 referenceSignature:(id)a2 size:(id)a3;
- (id)CKPropertiesDescription;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
