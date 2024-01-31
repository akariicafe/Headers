@class SXJSONArray, NSString;

@interface SXConditionalTextStyle : SXTextStyle <SXConditional>

@property (readonly, nonatomic) SXJSONArray *conditions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id /* block */)valueClassBlockForPropertyWithName:(id)a0;


@end
