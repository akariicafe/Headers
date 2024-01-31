@class NSDictionary, PHASEEngine;

@interface PHASEGroupPreset : NSObject {
    PHASEEngine *_engine;
}

@property (readonly, nonatomic) NSDictionary *settings;
@property (readonly, nonatomic) double timeToTarget;
@property (readonly, nonatomic) double timeToReset;

+ (id)new;

- (id)init;
- (void)activate;
- (void).cxx_destruct;
- (void)deactivate;
- (void)activateWithTimeToTargetOverride:(double)a0;
- (void)deactivateWithTimeToResetOverride:(double)a0;
- (id)initWithEngine:(id)a0 settings:(id)a1 timeToTarget:(double)a2 timeToReset:(double)a3;

@end
