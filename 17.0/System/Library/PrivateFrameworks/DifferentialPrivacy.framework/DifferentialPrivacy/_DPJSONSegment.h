@class NSString, NSArray, NSDictionary;

@interface _DPJSONSegment : NSObject

@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, copy, nonatomic) NSString *serverAlgorithmString;
@property (readonly, nonatomic) NSArray *records;
@property (readonly, nonatomic) NSDictionary *parameterDictionary;

- (id)init;
- (void).cxx_destruct;
- (id)fixDoubleValuesInDictionary:(id)a0;
- (id)initWithKey:(id)a0 serverAlgorithmString:(id)a1 parameterDictionary:(id)a2 records:(id)a3;
- (id)jsonSegmentString;
- (id)parameterStringFrom:(id)a0;

@end
