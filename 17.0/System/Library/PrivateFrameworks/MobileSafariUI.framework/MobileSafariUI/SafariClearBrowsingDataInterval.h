@class NSString;

@interface SafariClearBrowsingDataInterval : NSObject

@property (nonatomic) long long clearBrowsingDataInterval;
@property (readonly) NSString *descriptionOfInterval;
@property (copy, nonatomic) id /* block */ dateAfterWhichDataShouldBeClearedBlock;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDescription:(id)a0 dateAfterWhichDataShouldBeClearedBlock:(id /* block */)a1;

@end
