@class NSString, NSMutableString;

@interface ENEncryptedContentInfo : NSObject

@property (copy, nonatomic) NSString *cipher;
@property long long keyLength;
@property (copy, nonatomic) NSString *hint;
@property (retain, nonatomic) NSMutableString *cipherText;

- (id)init;
- (void).cxx_destruct;

@end
