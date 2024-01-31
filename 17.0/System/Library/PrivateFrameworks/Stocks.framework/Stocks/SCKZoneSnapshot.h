@class NSArray, SCKZoneSchema;

@interface SCKZoneSnapshot : NSObject <SCKZoneReading>

@property (retain, nonatomic) SCKZoneSchema *zoneSchema;
@property (copy, nonatomic) NSArray *records;
@property (readonly, copy, nonatomic) NSArray *allRecords;

- (id)recordsOfType:(id)a0;
- (id)descriptionOfContents;
- (BOOL)isEqualToSnapshot:(id)a0;
- (id)recordOfType:(id)a0;
- (id)initWithZoneSchema:(id)a0 records:(id)a1;
- (void).cxx_destruct;
- (id)recordWithName:(id)a0;
- (id)recordOfType:(id)a0 passingTest:(id /* block */)a1;

@end
