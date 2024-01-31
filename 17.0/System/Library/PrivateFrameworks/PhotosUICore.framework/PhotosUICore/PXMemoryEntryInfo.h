@class NSArray, NSDate;

@interface PXMemoryEntryInfo : NSObject <NSCopying>

@property (readonly, nonatomic) NSDate *representativeDate;
@property (readonly, copy, nonatomic) NSArray *memories;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;

+ (long long)compareMemoryInfo:(id)a0 toMemoryInfo:(id)a1;
+ (long long)compareMemoryInfo:(id)a0 byRelevanceScoreToMemoryInfo:(id)a1;

- (long long)compare:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)entryByAddingMemory:(id)a0;
- (id)entryByRemovingMemory:(id)a0;
- (id)entryByReplacingMemoryInfoAtIndex:(long long)a0 withMemoryInfo:(id)a1;
- (unsigned long long)indexOfMemory:(id)a0;
- (id)initWithMemories:(id)a0;
- (id)initWithSortedMemories:(id)a0;

@end
