@class NSString, NSDictionary;

@interface ATXFaceSuggestionUprankedDateIntervalSignal : NSObject <ATXFaceSuggestionSignal> {
    NSDictionary *_uprankedDateIntervals;
}

@property (readonly, nonatomic) double weight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithParameters:(id)a0;
- (double)valueForDescriptor:(id)a0;

@end
