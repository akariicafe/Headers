@class NSString, NSNumber, NSMutableDictionary;

@interface MLContentRating : NSObject <NSCopying> {
    NSMutableDictionary *_dictionary;
}

@property (copy, nonatomic) NSString *ratingDescription;
@property (copy, nonatomic) NSString *ratingLabel;
@property (retain, nonatomic) NSNumber *ratingRank;
@property (copy, nonatomic) NSString *ratingSystem;

- (id)init;
- (id)initWithStringRepresentation:(id)a0;
- (void).cxx_destruct;
- (void)_setValue:(id)a0 forKey:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_setValueCopy:(id)a0 forKey:(id)a1;
- (id)copyStringRepresentation;
- (id)initWithContentRatingDictionary:(id)a0;

@end
