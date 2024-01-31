@class NSString;

@interface _SUUIInspectableProperty : NSObject

@property (copy, nonatomic) NSString *friendlyName;
@property (retain, nonatomic) id value;
@property (readonly, copy, nonatomic) NSString *valueString;

- (void).cxx_destruct;

@end
