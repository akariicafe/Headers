@class NSString;

@interface _HUDStatistic : _HUDRow {
    struct CHistoryRecord { float m_currentTime; unsigned int m_currentOffset; unsigned int m_lastOffset; float m_accumulatedValue; float m_averageValue; float m_history[120]; float m_minValue; float m_maxValue; } _historyRecord;
}

@property (readonly, nonatomic) unsigned int rgba;
@property (readonly, nonatomic) double tolerance;
@property (readonly, nonatomic) NSString *graph;

- (id).cxx_construct;
- (void).cxx_destruct;
- (double)incrementStatistic:(double)a0 forFrame:(unsigned long long)a1;
- (id)initWithName:(id)a0 color:(unsigned int)a1 tolerance:(double)a2 graph:(id)a3;
- (void)setStatistic:(double)a0 forFrame:(unsigned long long)a1;

@end
