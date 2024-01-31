@interface HDActivityCacheActiveSourceCalculator : NSObject {
    long long _baseSourceIdentifier;
    struct vector<HDActivityCacheStatisticsBuilderWorkoutSample, std::allocator<HDActivityCacheStatisticsBuilderWorkoutSample>> { struct HDActivityCacheStatisticsBuilderWorkoutSample *__begin_; struct HDActivityCacheStatisticsBuilderWorkoutSample *__end_; struct __compressed_pair<HDActivityCacheStatisticsBuilderWorkoutSample *, std::allocator<HDActivityCacheStatisticsBuilderWorkoutSample>> { struct HDActivityCacheStatisticsBuilderWorkoutSample *__value_; } __end_cap_; } _workouts;
    struct vector<HDActivityCacheActiveSource, std::allocator<HDActivityCacheActiveSource>> { struct HDActivityCacheActiveSource *__begin_; struct HDActivityCacheActiveSource *__end_; struct __compressed_pair<HDActivityCacheActiveSource *, std::allocator<HDActivityCacheActiveSource>> { struct HDActivityCacheActiveSource *__value_; } __end_cap_; } _activationLogEntries;
}

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setWorkouts:(void *)a0;
- (void)setLocalDeviceSourceIdentifier:(long long)a0;
- (struct HDActivityCacheActiveSource { double x0; long long x1; struct vector<long long, std::allocator<long long>> { long long *x0; long long *x1; struct __compressed_pair<long long *, std::allocator<long long>> { long long *x0; } x2; } x2; })_baseActiveSource;
- (struct vector<HDActivityCacheActiveSource, std::allocator<HDActivityCacheActiveSource>> { struct HDActivityCacheActiveSource *x0; struct HDActivityCacheActiveSource *x1; struct __compressed_pair<HDActivityCacheActiveSource *, std::allocator<HDActivityCacheActiveSource>> { struct HDActivityCacheActiveSource *x0; } x2; })createActiveSourceLog;
- (void)setActivationLogEntries:(void *)a0;

@end
