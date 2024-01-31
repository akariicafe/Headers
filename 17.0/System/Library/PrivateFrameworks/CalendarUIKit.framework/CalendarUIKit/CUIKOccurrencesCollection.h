@class NSArray;

@interface CUIKOccurrencesCollection : NSObject <NSCopying>

@property (readonly, nonatomic) NSArray *occurrences;
@property (readonly, nonatomic) NSArray *allDayOccurrences;
@property (readonly, nonatomic) NSArray *timedOccurrences;
@property (nonatomic) int generation;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithOccurrences:(id)a0 timedOccurrences:(id)a1 allDayOccurrences:(id)a2;
- (id)initWithOccurrences:(id)a0 timedOccurrences:(id)a1 allDayOccurrences:(id)a2 generation:(int)a3;

@end
