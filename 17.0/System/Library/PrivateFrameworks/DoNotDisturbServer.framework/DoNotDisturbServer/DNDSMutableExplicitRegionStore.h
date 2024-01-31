@class NSSet;

@interface DNDSMutableExplicitRegionStore : DNDSExplicitRegionStore

@property (copy, nonatomic) NSSet *enteredRegionIdentifiersPendingExit;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setEnteredRegionIdentifiersPendingExit:(id)a0;

@end
