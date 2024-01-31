@class IMNicknameFieldTaggingKey, NSData, IMNicknameFieldEncryptionKey, IMNicknameRecordTaggingKey;

@interface IMNicknameEncryptionPreKey : NSObject

@property (retain, nonatomic) NSData *generatedData;
@property (retain, nonatomic) NSData *derivedData;
@property (readonly, nonatomic) IMNicknameFieldEncryptionKey *fieldEncryptionKey;
@property (readonly, nonatomic) IMNicknameFieldTaggingKey *fieldTaggingKey;
@property (readonly, nonatomic) IMNicknameRecordTaggingKey *recordTaggingKey;

+ (id)generatePreKeyWithError:(id *)a0;
+ (id)preKeyWithDataRepresentation:(id)a0 error:(id *)a1;

- (id)dataRepresentation;
- (void).cxx_destruct;
- (id)_subDerivedKeyDataAtIndex:(unsigned long long)a0;
- (id)initWithGeneratedData:(id)a0 derivedData:(id)a1;

@end
