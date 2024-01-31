@class NSString;

@interface CNUICoreContactNicknameValueFilter : NSObject <CNUICoreContactPropertyValueFilter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)contactByFilteringOutPropertyValueOfContact:(id)a0;
- (void)filterPropertyValuesFromContact:(id)a0;

@end
