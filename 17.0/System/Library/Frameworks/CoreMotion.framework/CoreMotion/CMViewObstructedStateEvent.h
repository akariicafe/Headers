@class NSString, NSArray;

@interface CMViewObstructedStateEvent : NSObject

@property (nonatomic) BOOL shouldSuppress;
@property (nonatomic) unsigned char currentState;
@property (copy, nonatomic) NSString *orientation;
@property (copy, nonatomic) NSString *motionType;
@property (nonatomic) float lux;
@property (nonatomic) float pocketProbability;
@property (retain, nonatomic) NSArray *meanProbabilities;

- (void)dealloc;
- (id)description;
- (id)initWithShouldSupress:(BOOL)a0 currentState:(unsigned char)a1 orientation:(id)a2 motionType:(id)a3 lux:(float)a4 pocketProbability:(float)a5 meanProbabilitiesFloatArray:(id)a6;

@end
