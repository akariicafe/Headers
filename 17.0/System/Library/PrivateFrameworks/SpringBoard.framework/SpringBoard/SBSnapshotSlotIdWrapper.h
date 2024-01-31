@class CAContext;

@interface SBSnapshotSlotIdWrapper : NSObject

@property (readonly, nonatomic) unsigned int slotId;
@property (readonly, nonatomic) CAContext *context;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0 slotId:(unsigned int)a1;

@end
