@class NSArray;

@interface CRTrackingAssociatorResults : NSObject

@property double totalError;
@property (retain) NSArray *tracked;
@property (retain) NSArray *updatedRegionIDs;
@property (retain) NSArray *removedRegionIDs;
@property (retain) NSArray *addedRegionIDs;

- (void).cxx_destruct;

@end
