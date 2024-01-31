@class NSMutableDictionary, NSDictionary, NSUUID, NSString;

@interface APOdmlBiomeEvent : NSObject <BMStoreData>

@property (retain, nonatomic) NSMutableDictionary *outerDictionary;
@property (readonly, nonatomic) NSDictionary *dictionary;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)_customClassesForDataDict;

- (id)serialize;
- (id)jsonDict;
- (id)json;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 andIdentifier:(id)a1;

@end
