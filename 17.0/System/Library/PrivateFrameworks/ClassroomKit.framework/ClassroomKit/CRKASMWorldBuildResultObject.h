@class NSArray;
@protocol CRKASMRoster;

@interface CRKASMWorldBuildResultObject : NSObject

@property (readonly, nonatomic) id<CRKASMRoster> roster;
@property (readonly, copy, nonatomic) NSArray *manageableLocations;

- (id)init;
- (void).cxx_destruct;
- (id)initWithRoster:(id)a0 manageableLocations:(id)a1;

@end
