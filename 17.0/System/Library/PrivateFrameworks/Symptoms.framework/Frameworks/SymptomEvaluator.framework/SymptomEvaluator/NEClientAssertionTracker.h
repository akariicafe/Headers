@class NSUUID;

@interface NEClientAssertionTracker : NSObject

@property (retain, nonatomic) NSUUID *processUUID;
@property (nonatomic) BOOL hasAppRecord;
@property (nonatomic) unsigned long long count;

- (id)description;
- (void).cxx_destruct;

@end
