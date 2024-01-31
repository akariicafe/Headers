@class NSString;

@interface SKUIReviewConfiguration : NSObject

@property (readonly, nonatomic) NSString *allVersionsURLString;
@property (readonly, nonatomic) NSString *currentVersionURLString;
@property (readonly, nonatomic) NSString *pageNumberQueryParameter;
@property (readonly, nonatomic) NSString *ratingURLString;

- (void).cxx_destruct;
- (id)initWithConfigurationDictionary:(id)a0;

@end
