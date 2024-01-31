@class NSString, NSMutableArray;

@interface GEOAvailableExperiment : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSMutableArray *branches;

- (id)description;
- (void).cxx_destruct;
- (void)_addBranch:(id)a0;
- (id)_branchForLabel:(id)a0;
- (id)initWithIdentifier:(id)a0 name:(id)a1;

@end
