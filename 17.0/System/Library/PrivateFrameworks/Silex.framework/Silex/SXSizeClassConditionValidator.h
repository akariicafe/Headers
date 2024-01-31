@class NSString;

@interface SXSizeClassConditionValidator : NSObject <SXConditionValidating>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)validateCondition:(id)a0 context:(id)a1;

@end
