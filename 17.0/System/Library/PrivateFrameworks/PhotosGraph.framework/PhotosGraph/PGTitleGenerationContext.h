@class PGGraphLocationHelper, PGGraphPublicEventCategoryNodeCollection, PGGraph, CLSHolidayCalendarEventService;

@interface PGTitleGenerationContext : NSObject

@property (retain, nonatomic) PGGraph *graph;
@property (readonly) PGGraphLocationHelper *locationHelper;
@property (readonly) CLSHolidayCalendarEventService *holidayService;
@property (readonly) PGGraphPublicEventCategoryNodeCollection *appleEventsCategoryNodes;

- (void).cxx_destruct;
- (id)initWithGraph:(id)a0;
- (id)initLegacyForMemories;

@end
