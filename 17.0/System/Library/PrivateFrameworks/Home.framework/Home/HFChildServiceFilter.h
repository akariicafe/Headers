@class NSSet;

@interface HFChildServiceFilter : NSObject

@property (readonly, copy, nonatomic) NSSet *childServiceTypes;

- (void).cxx_destruct;
- (id)filteredChildServicesForParentService:(id)a0;
- (id)initWithChildServiceTypes:(id)a0;

@end
