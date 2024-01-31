@class NSString, NSURL;

@interface FMDFMIPAccountInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *dsid;
@property (copy, nonatomic) NSString *oneTimeRemoveAuthToken;
@property (copy) NSURL *serverURL;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithUserName:(id)a0 dsid:(id)a1 oneTimeRemoveAuthToken:(id)a2 serverURL:(id)a3;

@end
