@interface CHMecabraWrapper : NSObject

@property (readonly) struct __Mecabra { } *mecabra;

- (id)init;
- (void)dealloc;
- (void)initMecabraIfNeededWithType:(int)a0 learningDictURL:(id)a1;

@end
