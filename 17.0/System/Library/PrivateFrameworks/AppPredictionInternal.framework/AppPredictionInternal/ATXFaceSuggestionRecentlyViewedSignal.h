@class NSString, NSCountedSet;

@interface ATXFaceSuggestionRecentlyViewedSignal : NSObject <ATXFaceSuggestionSignal> {
    NSCountedSet *_recentlyViewedFeaturedDescriptorKeys;
}

@property (readonly, nonatomic) double weight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (double)valueForDescriptor:(id)a0;

@end
