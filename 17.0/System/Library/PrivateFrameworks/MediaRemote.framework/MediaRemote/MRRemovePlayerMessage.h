@class MRPlayerPath;

@interface MRRemovePlayerMessage : MRProtocolMessage

@property (readonly, nonatomic) MRPlayerPath *playerPath;

- (id)initWithPlayerPath:(id)a0;
- (unsigned long long)type;

@end
