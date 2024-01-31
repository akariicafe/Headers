@class PAAccess;

@interface PAWorkInProgressAccessInterval : NSObject

@property (retain, nonatomic) PAAccess *access;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;

- (id)init;
- (void).cxx_destruct;
- (id)asSealedRecord;

@end
