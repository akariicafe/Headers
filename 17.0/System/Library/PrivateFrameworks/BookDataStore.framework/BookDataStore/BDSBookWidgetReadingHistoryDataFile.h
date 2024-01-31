@class NSURL, BDSSharedDataFile;

@interface BDSBookWidgetReadingHistoryDataFile : NSObject

@property (class, readonly, nonatomic) NSURL *defaultDataURL;

@property (readonly, nonatomic) BDSSharedDataFile *dataFile;

+ (id)sharedInstance;

- (void)save:(id)a0;
- (id)load;
- (id)init;
- (void).cxx_destruct;

@end
