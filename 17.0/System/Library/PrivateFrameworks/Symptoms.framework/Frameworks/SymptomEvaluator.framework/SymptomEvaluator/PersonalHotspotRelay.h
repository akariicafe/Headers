@interface PersonalHotspotRelay : NSObject

@property (nonatomic) BOOL isReady;
@property (nonatomic) int state;
@property (nonatomic) unsigned int softAPClientCount;
@property (nonatomic) unsigned int wifiNanClientCount;

+ (id)sharedInstance;

- (void)updateWithState:(int)a0 softAPClientCount:(unsigned int)a1 wifiNanClientCount:(unsigned int)a2;

@end
