@interface PKApplicationMessageRequest : NSObject

@property (nonatomic) unsigned long long priority;
@property (nonatomic) BOOL badge;
@property (nonatomic) BOOL resetCreatedDate;

@end
