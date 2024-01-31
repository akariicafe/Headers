@class NSString, NSData, IMNicknameEncryptionFieldTag;

@interface IMNicknameEncryptionCipherRecordField : NSObject

@property (retain, nonatomic) NSString *fieldName;
@property (retain, nonatomic) NSData *cipherData;
@property (retain, nonatomic) NSData *IV;
@property (retain, nonatomic) IMNicknameEncryptionFieldTag *fieldTag;

+ (id)cipherRecordFieldWithFieldName:(id)a0 dataRepresentation:(id)a1 error:(id *)a2;

- (id)dataRepresentationWithError:(id *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithFieldName:(id)a0 cipherData:(id)a1 IV:(id)a2 tag:(id)a3;

@end
