@class NSURL, NSDictionary;

@interface ICInAppMessageConfiguration : NSObject {
    NSDictionary *_dictionary;
}

@property (readonly, nonatomic) NSURL *reportEventURL;
@property (readonly, nonatomic) NSURL *serialCheckURL;
@property (readonly, nonatomic) NSURL *syncURL;
@property (readonly, nonatomic) NSURL *resourceDomainURL;
@property (readonly, nonatomic) long long syncPollingInterval;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
