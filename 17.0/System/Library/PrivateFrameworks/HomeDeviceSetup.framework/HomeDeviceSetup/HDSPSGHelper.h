@class HMHome, NSArray, NSMutableDictionary;

@interface HDSPSGHelper : NSObject {
    HMHome *_currentHome;
    NSArray *_allPSGs;
    NSArray *_allHomePods;
    NSArray *_allStereoPairs;
    NSMutableDictionary *_psgHomePodMap;
    NSMutableDictionary *_psgStereoPairMap;
    NSMutableDictionary *_psgRoomMap;
}

- (void).cxx_destruct;
- (id)initWithHome:(id)a0;
- (id)allPSGsInRoom:(id)a0;
- (id)fetchPSG:(id)a0;
- (id)roomForStereoPair:(id)a0;
- (id)roomsForPSG:(id)a0;

@end
