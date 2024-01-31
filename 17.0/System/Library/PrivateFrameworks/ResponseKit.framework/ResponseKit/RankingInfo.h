@class NSString, NSDate;

@interface RankingInfo : NSManagedObject

@property (copy, nonatomic) NSString *category;
@property (nonatomic) short inputMethod;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *rankedList;
@property (copy, nonatomic) NSString *recipientId;
@property (copy, nonatomic) NSString *response;
@property (nonatomic) short source;
@property (copy, nonatomic) NSDate *timestamp;

+ (id)fetchRequest;

@end
