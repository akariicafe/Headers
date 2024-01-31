@class PGGraphHolidayNodeCollection;

@interface PGGraphCelebratingEdgeCollection : PGGraphEdgeCollection

@property (readonly, nonatomic) PGGraphHolidayNodeCollection *holidayNodes;

+ (Class)edgeClass;

@end
