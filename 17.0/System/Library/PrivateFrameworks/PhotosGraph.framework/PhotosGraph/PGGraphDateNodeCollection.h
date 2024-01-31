@class PGGraphWeekOfYearNodeCollection, PGGraphWeekOfMonthNodeCollection, PGGraphYearNodeCollection, PGGraphMonthDayNodeCollection, PGGraphHolidayNodeCollection, NSDateInterval, PGGraphSeasonNodeCollection, PGGraphMomentNodeCollection, PGGraphMonthNodeCollection, PGGraphDayNodeCollection;

@interface PGGraphDateNodeCollection : PGGraphNodeCollection

@property (readonly, nonatomic) PGGraphYearNodeCollection *yearNodes;
@property (readonly, nonatomic) PGGraphMonthDayNodeCollection *monthDayNodes;
@property (readonly, nonatomic) PGGraphMonthNodeCollection *monthNodes;
@property (readonly, nonatomic) PGGraphDayNodeCollection *dayNodes;
@property (readonly, nonatomic) PGGraphWeekOfYearNodeCollection *weekOfYearNodes;
@property (readonly, nonatomic) PGGraphWeekOfMonthNodeCollection *weekOfMonthNodes;
@property (readonly, nonatomic) PGGraphMomentNodeCollection *momentNodes;
@property (readonly, nonatomic) PGGraphSeasonNodeCollection *seasonNodes;
@property (readonly, nonatomic) PGGraphHolidayNodeCollection *holidayNodes;
@property (readonly, nonatomic) NSDateInterval *localDateInterval;

+ (Class)nodeClass;
+ (id)dateNodesForLocalDates:(id)a0 inGraph:(id)a1;

@end
