@class NSString, NSDate;

@interface MGGroupsActivity : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSDate *when;

- (void)dealloc;
- (id)initWithName:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
