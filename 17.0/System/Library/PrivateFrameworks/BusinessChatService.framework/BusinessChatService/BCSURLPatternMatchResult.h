@class NSURL, NSString, NSDate;
@protocol BCSDateHelperProtocol;

@interface BCSURLPatternMatchResult : NSObject <BCSExpiring>

@property (readonly, nonatomic) id<BCSDateHelperProtocol> dateHelper;
@property (copy, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) BOOL matchFound;
@property (readonly, nonatomic) NSURL *originalURL;
@property (readonly, nonatomic) NSURL *extractedURL;
@property (readonly, nonatomic) NSString *pattern;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) unsigned long long totalConsecutivePrefixMatches;
@property (readonly, nonatomic) unsigned long long totalExactMatches;
@property (readonly, nonatomic) unsigned long long totalAnyMatches;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)initWithOriginalURL:(id)a0 extractedURL:(id)a1 totalConsecutivePrefixMatches:(unsigned long long)a2 totalExactMatches:(unsigned long long)a3 totalAnyMatches:(unsigned long long)a4 bundleID:(id)a5 pattern:(id)a6 expirationDate:(id)a7 dateHelper:(id)a8;

@end
