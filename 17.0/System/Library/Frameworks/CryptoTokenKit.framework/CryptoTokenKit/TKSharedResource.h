@class TKSharedResourceSlot;

@interface TKSharedResource : NSObject {
    TKSharedResourceSlot *_slot;
}

@property (readonly, nonatomic) id object;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithSlot:(id)a0;

@end
