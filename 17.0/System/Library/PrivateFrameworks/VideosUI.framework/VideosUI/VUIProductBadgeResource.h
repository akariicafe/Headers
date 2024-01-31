@class NSString;

@interface VUIProductBadgeResource : NSObject

@property (copy, nonatomic) NSString *name;
@property (nonatomic, getter=isTemplated) BOOL templated;

- (id)init;
- (void).cxx_destruct;

@end
