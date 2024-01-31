@class NSDictionary, NSString;

@interface AMSEngagementPlacementInfo : NSObject

@property (readonly, nonatomic) NSDictionary *context;
@property (readonly, nonatomic) NSString *placement;
@property (nonatomic) BOOL supportsMultipleMessages;

- (id)makeRawDictionary;
- (void).cxx_destruct;
- (id)initWithPlacement:(id)a0 context:(id)a1;

@end
