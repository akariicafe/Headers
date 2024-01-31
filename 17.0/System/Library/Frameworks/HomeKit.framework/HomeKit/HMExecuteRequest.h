@class NSString, HMActionSet;

@interface HMExecuteRequest : HMRequestBase <HMExecuteOperation>

@property (readonly, nonatomic) HMActionSet *actionSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)executeRequestWithActionSet:(id)a0;

@end
