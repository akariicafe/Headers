@class NSString, NSMutableDictionary, NSDate;

@interface OSALogTrackerObject : NSObject

@property (nonatomic) unsigned long long count;
@property (retain, nonatomic) NSString *oldestLogPath;
@property (retain, nonatomic) NSDate *oldestDate;
@property (readonly) NSMutableDictionary *signatures;

+ (id)tracker;
+ (id)sharedTrackers;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
