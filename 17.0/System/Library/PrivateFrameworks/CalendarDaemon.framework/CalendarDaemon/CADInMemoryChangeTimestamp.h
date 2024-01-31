@class NSDictionary, CalSingleDatabaseInMemoryChangeTimestamp;

@interface CADInMemoryChangeTimestamp : NSObject <NSSecureCoding, NSCopying> {
    CalSingleDatabaseInMemoryChangeTimestamp *_universalTimestamp;
    NSDictionary *_timestamps;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)timestampForNow;
+ (BOOL)doesTimestamp:(id)a0 includeAllChangesVisibleToTimestamp:(id)a1;

- (id)redactedDescription;
- (id)initWithTimestamps:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)timestamps;
- (id)timestampForDatabase:(int)a0;
- (id)allDatabases;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
