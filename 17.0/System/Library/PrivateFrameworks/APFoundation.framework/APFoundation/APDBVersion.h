@class NSNumber;

@interface APDBVersion : APDatabaseRow

@property (retain, nonatomic) NSNumber *version;

+ (id)currentVersion;

- (id)initWithVersion:(id)a0;

@end
