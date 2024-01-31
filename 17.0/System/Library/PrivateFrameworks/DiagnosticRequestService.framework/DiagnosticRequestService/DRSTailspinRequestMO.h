@class NSNumber;

@interface DRSTailspinRequestMO : DRSRequestMO

@property (nonatomic) BOOL includeOsLog;
@property (nonatomic) BOOL includeOsSignpost;
@property (copy, nonatomic) NSNumber *maxMAT;
@property (copy, nonatomic) NSNumber *minMAT;
@property (nonatomic) BOOL scrubbed;

+ (id)fetchRequest;

@end
