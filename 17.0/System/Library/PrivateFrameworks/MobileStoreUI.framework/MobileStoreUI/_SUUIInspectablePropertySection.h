@class NSString, NSMutableArray;

@interface _SUUIInspectablePropertySection : NSObject

@property (copy, nonatomic) NSString *friendlyName;
@property (readonly, nonatomic) NSMutableArray *properties;

- (id)init;
- (void).cxx_destruct;

@end
