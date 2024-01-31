@class NSString, NSMutableSet, NSDate;

@interface PLBackgroundTransferEvent : NSObject

@property (retain) NSDate *startDate;
@property (retain) NSString *bundleID;
@property (retain) NSMutableSet *taskUUIDs;

- (id)description;
- (void).cxx_destruct;

@end
