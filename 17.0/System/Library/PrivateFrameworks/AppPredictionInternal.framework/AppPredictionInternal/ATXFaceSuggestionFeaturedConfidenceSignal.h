@class NSString;

@interface ATXFaceSuggestionFeaturedConfidenceSignal : NSObject <ATXFaceSuggestionSignal>

@property (readonly, nonatomic) double weight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)valueForDescriptor:(id)a0;

@end
