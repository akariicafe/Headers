@class NSTimeZone, PHPhotoLibrary, NSDate;

@interface PGMemoryContext : NSObject

@property (retain, nonatomic) NSDate *creationDateOfLastMemory;
@property (nonatomic) unsigned long long numberOfDaysSinceMemoryUpgrade;
@property (readonly, nonatomic) NSDate *localDate;
@property (readonly, nonatomic) NSTimeZone *timeZone;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) BOOL futureLookup;

- (void).cxx_destruct;
- (id)initWithFutureLocalDate:(id)a0 timeZone:(id)a1 photoLibrary:(id)a2;
- (id)initWithLocalDate:(id)a0 timeZone:(id)a1 photoLibrary:(id)a2;
- (id)initWithMemoryPlanner:(id)a0 photoLibrary:(id)a1;

@end
