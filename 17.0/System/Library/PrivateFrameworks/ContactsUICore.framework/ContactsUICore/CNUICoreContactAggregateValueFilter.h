@class NSArray, NSString;

@interface CNUICoreContactAggregateValueFilter : NSObject <CNUICoreContactPropertyValueFilter>

@property (readonly, nonatomic) NSArray *valueFilters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)contactByFilteringOutPropertyValueOfContact:(id)a0;
- (void)filterPropertyValuesFromContact:(id)a0;
- (id)initWithValueFilters:(id)a0;

@end
