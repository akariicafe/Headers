@class HMUser;

@interface _HUUserAccessItem : HFItem

@property (readonly, nonatomic) HMUser *user;
@property (readonly, copy, nonatomic) id /* block */ resultsBlock;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithUser:(id)a0 resultsBlock:(id /* block */)a1;

@end
