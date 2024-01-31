@class NSString, NSArray;

@interface SGEventMetadata : NSObject

@property (readonly, nonatomic) unsigned char type;
@property (readonly, nonatomic) NSString *categoryDescription;
@property (readonly, nonatomic) NSString *originBundleId;
@property (readonly, nonatomic) double confidence;
@property (readonly, nonatomic) NSArray *schemaOrg;
@property (readonly, nonatomic) NSArray *participants;
@property (readonly, nonatomic) NSArray *eventActivities;

+ (id)describeType:(unsigned char)a0;
+ (unsigned char)eventTypeFromString:(id)a0;
+ (id)eventMetadataFromEKEvent:(id)a0;

- (id)jsonObject;
- (void).cxx_destruct;
- (id)initWithType:(unsigned char)a0 categoryDescription:(id)a1 originBundleId:(id)a2 confidence:(double)a3 schemaOrg:(id)a4 participants:(id)a5;
- (id)initWithType:(unsigned char)a0 categoryDescription:(id)a1 originBundleId:(id)a2 confidence:(double)a3 schemaOrg:(id)a4 participants:(id)a5 eventActivities:(id)a6;
- (id)toJsonString;

@end
