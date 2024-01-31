@class NSDate;

@interface DRSUploadSessionRecordMO : NSManagedObject

@property (copy, nonatomic) NSDate *sessionDate;

+ (id)fetchRequest;

@end
