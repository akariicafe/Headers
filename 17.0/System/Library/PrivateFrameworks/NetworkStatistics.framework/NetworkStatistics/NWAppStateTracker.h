@class NSString, NSUUID;

@interface NWAppStateTracker : NSObject

@property (retain) NSString *identifier;
@property (retain) NSUUID *uuid;
@property int pid;

- (id)description;
- (void).cxx_destruct;

@end
