@class NSSet, COClusterMember;
@protocol COInterestTrackerDelegate;

@interface COInterestTracker : NSObject

@property (copy, nonatomic) NSSet *interests;
@property (nonatomic) BOOL primaryAvailable;
@property (retain, nonatomic) COClusterMember *secondary;
@property (readonly, weak, nonatomic) id<COInterestTrackerDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 primaryAvailable:(BOOL)a1 secondary:(id)a2;

@end
