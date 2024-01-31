@class NSArray, NSString, NSMutableDictionary;

@interface SKUICompletionList : NSObject <SKUICacheCoding>

@property (readonly, nonatomic) NSArray *completions;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSMutableDictionary *cacheRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithCacheRepresentation:(id)a0;
- (id)initWithCompletionListDictionary:(id)a0;

@end
