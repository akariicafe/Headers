@class NSString, NSNumber, NSURL;

@interface SSVContentLink : NSObject

@property (copy, nonatomic) NSString *categoryName;
@property (copy, nonatomic) NSNumber *itemIdentifier;
@property (copy, nonatomic) NSString *itemTitle;
@property (copy, nonatomic) NSString *providerName;
@property (copy, nonatomic) NSString *searchTerm;
@property (nonatomic) long long contentKind;
@property (nonatomic) long long targetApplication;
@property (readonly, nonatomic) NSURL *URL;

- (void).cxx_destruct;
- (id)_URLSchemeWithApplication:(long long)a0;
- (id)_stringForContentKind:(long long)a0;
- (long long)_targetApplicationWithContentKind:(long long)a0;

@end
