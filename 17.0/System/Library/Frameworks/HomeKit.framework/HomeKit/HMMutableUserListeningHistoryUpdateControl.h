@class NSArray;

@interface HMMutableUserListeningHistoryUpdateControl : HMUserListeningHistoryUpdateControl

@property (copy) NSArray *accessories;

- (void)removeAccessory:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addAccessory:(id)a0;
- (id)initWithAccessories:(id)a0;

@end
