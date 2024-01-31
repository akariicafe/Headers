@class NSURL, NSString;

@interface ASCABLELoginChoice : NSObject <ASCLoginChoiceProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSURL *qrCodeURL;
@property (readonly, nonatomic) unsigned long long loginChoiceKind;
@property (readonly, nonatomic) BOOL isSharedCredential;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithQRCodeURL:(id)a0;

@end
