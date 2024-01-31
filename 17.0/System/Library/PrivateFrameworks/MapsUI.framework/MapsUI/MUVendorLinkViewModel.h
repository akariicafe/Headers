@class NSURL, NSString;

@interface MUVendorLinkViewModel : NSObject

@property (retain, nonatomic) NSURL *artworkURL;
@property (copy, nonatomic) NSString *providerName;
@property (nonatomic) int linkType;
@property (copy, nonatomic) NSString *appAdamId;
@property (copy, nonatomic) NSString *appShortName;
@property (copy, nonatomic) NSString *linkTypeString;
@property (copy, nonatomic) NSString *actionName;
@property (readonly, nonatomic) NSString *uniqueIdentifier;

- (id)description;
- (void).cxx_destruct;

@end
