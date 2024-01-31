@class NSArray;

@interface MapsUI.MUEVChargerAvailability : NSObject {
    void /* unknown type, empty encoding */ plugs;
    void /* unknown type, empty encoding */ vehicles;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ aggregatedInfo;
@property (nonatomic, readonly) NSArray *plugs;
@property (nonatomic, readonly) NSArray *vehicles;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAggregatedCounts:(id)a0 plugs:(id)a1 vehicles:(id)a2;

@end
