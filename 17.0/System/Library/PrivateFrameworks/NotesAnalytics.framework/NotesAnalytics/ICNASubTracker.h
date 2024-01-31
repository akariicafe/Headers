@class NSString, AATracker;

@interface ICNASubTracker : NSObject

@property (retain) AATracker *aaTracker;
@property (readonly, copy, nonatomic) NSString *aaTrackerName;

- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 parentAATracker:(id)a1;
- (id)initWithName:(id)a0 parentTracker:(id)a1;

@end
