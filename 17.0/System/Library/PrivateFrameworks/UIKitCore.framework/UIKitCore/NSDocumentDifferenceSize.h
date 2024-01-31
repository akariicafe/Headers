@interface NSDocumentDifferenceSize : NSObject

@property (nonatomic) long long generationCount;
@property (nonatomic) long long changeCount;

- (id)description;

@end
