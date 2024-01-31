@class NSNumber, NSDate;

@interface TemplateInfo : NSObject

@property short totalNodeCount;
@property double totalArea;
@property short largestComponentNodeCount;
@property double largestComponentArea;
@property short clusterCount;
@property (retain, nonatomic) NSDate *creationTime;
@property (nonatomic) long long matchCount;
@property (nonatomic) long long updateCount;
@property (retain) NSNumber *userID;

- (void).cxx_destruct;

@end
