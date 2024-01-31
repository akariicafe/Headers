@class NSArray, NSNumber;

@interface STSGridTile : NSObject

@property (copy, nonatomic) NSArray *smallIndexes;
@property (retain, nonatomic) NSNumber *largeIndex;
@property (nonatomic) long long layoutStyle;

- (id)description;
- (void).cxx_destruct;

@end
