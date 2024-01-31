@class NSString;

@interface DRSSubmitLogRequestMO : DRSRequestMO

@property (copy, nonatomic) NSString *logType;

+ (id)fetchRequest;

@end
