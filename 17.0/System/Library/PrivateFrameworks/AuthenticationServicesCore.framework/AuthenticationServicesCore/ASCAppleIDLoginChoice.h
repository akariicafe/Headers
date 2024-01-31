@class NSString;

@interface ASCAppleIDLoginChoice : NSObject <ASCLoginChoiceProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *user;
@property (readonly, nonatomic) unsigned long long loginChoiceKind;
@property (readonly, nonatomic) BOOL isSharedCredential;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
