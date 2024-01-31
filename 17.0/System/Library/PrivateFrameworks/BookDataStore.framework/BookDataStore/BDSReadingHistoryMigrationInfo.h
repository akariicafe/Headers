@class NSURL, NSString;

@interface BDSReadingHistoryMigrationInfo : NSObject

@property (class, readonly, nonatomic) NSURL *readingHistoryFileURL;
@property (class, readonly, nonatomic) NSString *booksFinishedUserDefaultsKey;
@property (class, readonly, nonatomic) NSString *streakDayUserDefaultsKey;
@property (class, readonly, nonatomic) NSString *dataHasBeenMovedUserDefaultsKey;

+ (id)description;

@end
