@class NSData, NSString;

@interface AMDHistory : NSManagedObject

@property (nonatomic) short day;
@property (nonatomic) short domain;
@property (retain, nonatomic) NSData *results;
@property (copy, nonatomic) NSString *useCaseId;
@property (copy, nonatomic) NSString *userId;

+ (id)fetchRequest;

@end
