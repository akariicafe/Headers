@class PKTransactionReleasedData, NSString, NSData, NSURL, NSNumber;

@interface PKISO18013DataReleaseRequest : NSObject

@property (retain, nonatomic) PKTransactionReleasedData *dataElements;
@property (retain, nonatomic) NSString *rpIdentifier;
@property (retain, nonatomic) NSString *organizationName;
@property (retain, nonatomic) NSString *organizationUnit;
@property (retain, nonatomic) NSData *iconData;
@property (retain, nonatomic) NSURL *iconURL;
@property (retain, nonatomic) NSNumber *industryCode;
@property (retain, nonatomic) NSData *authenticationACL;
@property (retain, nonatomic) NSData *externalizedAuthenticationContext;

- (void).cxx_destruct;

@end
