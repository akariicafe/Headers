@interface TKSmartCardSlotScreen : NSObject

@property long long physicalColumnCount;
@property long long physicalRowCount;
@property long long virtualColumnCount;
@property long long virtualRowCount;

- (BOOL)displayMessage:(id)a0 x:(long long)a1 y:(long long)a2 duration:(double)a3 clearScreen:(BOOL)a4;

@end
