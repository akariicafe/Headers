@class NSDictionary, NSArray, NSString;

@interface VUIDebugMetricsImpression : NSObject

@property (retain, nonatomic) NSDictionary *mainValues;
@property (retain, nonatomic) NSDictionary *otherValues;
@property (retain, nonatomic) NSArray *orderedOtherKeys;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *idType;
@property (readonly, nonatomic) NSString *impressionId;
@property (readonly, nonatomic) NSString *impressionIndex;
@property (readonly, nonatomic) NSString *parentId;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)a0;

@end
