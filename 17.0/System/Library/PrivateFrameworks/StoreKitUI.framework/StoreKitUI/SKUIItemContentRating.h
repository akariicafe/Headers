@class NSArray, NSString;

@interface SKUIItemContentRating : NSObject

@property (readonly, nonatomic) NSArray *contentRatingAdvisories;
@property (readonly, nonatomic) NSString *contentRatingName;
@property (readonly, nonatomic) NSString *contentRank;
@property (readonly, nonatomic) NSString *contentRatingSystemName;

- (id)description;
- (void).cxx_destruct;
- (id)initWithContentRatingDictionary:(id)a0 systemName:(id)a1;

@end
