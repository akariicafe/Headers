@class NSData;

@interface GCExtendedGamepadSnapshot : GCExtendedGamepad

@property (copy) NSData *snapshotData;

- (id)init;
- (void).cxx_destruct;
- (id)initWithController:(id)a0 snapshotData:(id)a1;
- (id)initWithSnapshotData:(id)a0;

@end
