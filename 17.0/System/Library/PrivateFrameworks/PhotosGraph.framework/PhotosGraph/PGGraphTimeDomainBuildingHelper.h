@class PGGraph, NSMutableDictionary;

@interface PGGraphTimeDomainBuildingHelper : NSObject {
    PGGraph *_graph;
    NSMutableDictionary *_calendarUnitNodeByValueByUnit;
    NSMutableDictionary *_seasonNodeBySeasonName;
    NSMutableDictionary *_dayOfWeekNodeByDayOfWeek;
}

- (id)dayOfWeekNodeForDayOfWeek:(long long)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithGraph:(id)a0;
- (id)calendarUnitNodeForCalendarUnit:(unsigned long long)a0 value:(long long)a1;
- (id)seasonNodeForSeasonName:(id)a0;

@end
