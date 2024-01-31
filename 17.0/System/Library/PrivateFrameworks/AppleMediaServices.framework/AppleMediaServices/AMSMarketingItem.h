@class NSDictionary, NSString, NSArray;

@interface AMSMarketingItem : NSObject

@property (readonly, nonatomic) NSDictionary *artworkDictionary;
@property (readonly, nonatomic) NSString *badge;
@property (readonly, nonatomic) NSString *campaignID;
@property (readonly, nonatomic) NSString *itemID;
@property (readonly, nonatomic) NSArray *itemActions;
@property (readonly, copy, nonatomic) NSDictionary *rawValues;
@property (readonly, nonatomic) NSArray *relatedContent;
@property (readonly, nonatomic) NSString *serviceType;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) NSString *templateID;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSString *URLString;
@property (readonly, nonatomic) NSArray *videos;

- (id)endDate;
- (id)initWithDictionary:(id)a0;
- (id)video;
- (void).cxx_destruct;
- (id)tagline;
- (id)abSettings;
- (id)renderingAttributes;

@end
