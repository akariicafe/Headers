@class NSSet, NSString, NSDate;

@interface WBSWebExtensionPendingWebsiteRequest : NSObject

@property (copy, nonatomic) NSSet *urls;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) NSString *apiName;
@property (copy, nonatomic) NSDate *expirationDate;

- (void).cxx_destruct;

@end
