@interface HFActivityEventStatusItem : HFStatusItem <HFActivityEventStatusVending> {
    void /* unknown type, empty encoding */ cachedEvents;
    void /* unknown type, empty encoding */ midnightToday;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ activityLogCoordinator;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithHome:(id)a0 room:(id)a1 valueSource:(id)a2;

@end
