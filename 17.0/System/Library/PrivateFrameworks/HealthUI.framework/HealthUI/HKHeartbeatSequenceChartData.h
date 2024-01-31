@class NSMutableArray;

@interface HKHeartbeatSequenceChartData : NSObject

@property (readonly, nonatomic) NSMutableArray *sections;
@property (nonatomic) double initialXAxisOffset;

- (id)init;
- (void).cxx_destruct;
- (long long)sectionCount;
- (void)_expandToSection:(long long)a0;
- (void)addSequencePoint:(id)a0 section:(long long)a1;
- (void)enumerateSequences:(id /* block */)a0;

@end
