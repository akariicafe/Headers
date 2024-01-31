@class NSString, NSDate;

@interface PLProcessMetadata : NSObject

@property int pid;
@property (retain) NSString *bundleId;
@property (retain) NSString *name;
@property (retain) NSDate *lastActiveStart;
@property (retain) NSDate *lastSuspendStart;

- (void).cxx_destruct;
- (id)initWithPid:(int)a0;

@end
