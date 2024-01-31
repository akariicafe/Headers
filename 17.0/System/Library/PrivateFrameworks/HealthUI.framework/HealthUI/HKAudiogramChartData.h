@class NSString;

@interface HKAudiogramChartData : NSObject <HKGraphSeriesChartData>

@property (readonly, nonatomic) double frequencyHertz;
@property (readonly, nonatomic) double sensitivityDBHL;
@property (readonly, nonatomic) BOOL isLeftEar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrequency:(double)a0 sensitivity:(double)a1 isLeftEar:(BOOL)a2;

@end
