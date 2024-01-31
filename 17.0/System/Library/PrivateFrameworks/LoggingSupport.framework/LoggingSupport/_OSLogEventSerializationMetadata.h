@class NSString, NSMutableDictionary, NSDate;

@interface _OSLogEventSerializationMetadata : NSObject

@property (readonly, nonatomic) NSMutableDictionary *stringToIndexMapping;
@property (readonly, nonatomic) NSMutableDictionary *indexToStringMapping;
@property (nonatomic) unsigned long long flags;
@property (retain, nonatomic) NSString *filterPredicateDescription;
@property (nonatomic) unsigned long long maxLogEventBatchSize;
@property (nonatomic) unsigned long long serializedEventCount;
@property (retain, nonatomic) NSDate *firstDate;
@property (retain, nonatomic) NSDate *lastDate;

- (id)dataRepresentation;
- (id)indexForString:(id)a0;
- (id)initWithDataRepresentation:(id)a0;
- (id)init;
- (id)stringForIndex:(id)a0;
- (void).cxx_destruct;

@end
