@class MPModelObject;

@interface MPCPlayerFavoriteCommandRequest : MPCPlayerCommandRequest

@property (readonly, nonatomic) MPModelObject *modelObject;
@property (readonly, nonatomic) BOOL value;

- (void).cxx_destruct;
- (id)initWithModelObject:(id)a0 value:(BOOL)a1 controller:(id)a2 label:(id)a3;

@end
