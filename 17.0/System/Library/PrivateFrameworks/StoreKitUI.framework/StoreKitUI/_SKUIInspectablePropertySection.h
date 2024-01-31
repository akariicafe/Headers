@class NSString, NSMutableArray;

@interface _SKUIInspectablePropertySection : NSObject

@property (copy, nonatomic) NSString *friendlyName;
@property (readonly, nonatomic) NSMutableArray *properties;

- (id)init;
- (void).cxx_destruct;

@end
