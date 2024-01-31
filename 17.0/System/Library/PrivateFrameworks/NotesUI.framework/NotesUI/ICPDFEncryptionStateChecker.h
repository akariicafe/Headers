@class NSURL;

@interface ICPDFEncryptionStateChecker : NSObject <NSCopying>

@property (nonatomic) unsigned long long encryptionState;
@property (readonly, copy, nonatomic) NSURL *pdfURL;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPDFURL:(id)a0;

@end
