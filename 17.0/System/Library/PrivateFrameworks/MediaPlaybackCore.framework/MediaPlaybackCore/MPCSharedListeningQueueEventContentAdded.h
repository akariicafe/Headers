@class NSArray, MPModelGenericObject;

@interface MPCSharedListeningQueueEventContentAdded : NSObject

@property (readonly, nonatomic) MPModelGenericObject *container;
@property (readonly, copy, nonatomic) NSArray *items;

- (id)description;
- (void).cxx_destruct;
- (id)initWithItems:(id)a0 container:(id)a1;

@end
