@class NSDictionary;

@interface VSWordTimingService : NSObject

@property (retain, nonatomic) NSDictionary *wordTimings;

- (void).cxx_destruct;
- (id)estimatedTTSWordTimingForText:(id)a0 withLanguage:(id)a1 voiceName:(id)a2;
- (id)timingInfosFrom:(id)a0 withText:(id)a1;
- (id)timingPlistForLanguage:(id)a0;

@end
