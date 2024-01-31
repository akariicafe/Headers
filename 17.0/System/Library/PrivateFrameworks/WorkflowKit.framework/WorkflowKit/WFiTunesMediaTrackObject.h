@class NSString, WFTimeInterval, NSURL, NSDictionary;

@interface WFiTunesMediaTrackObject : WFiTunesStoreObject <MTLJSONSerializing>

@property (readonly, nonatomic) NSURL *previewURL;
@property (readonly, nonatomic) NSString *genre;
@property (readonly, nonatomic) WFTimeInterval *duration;
@property (readonly, nonatomic) BOOL streamable;
@property (readonly, nonatomic) BOOL explicit;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)durationJSONTransformer;
+ (id)explicitJSONTransformer;
+ (id)priceJSONTransformer;

- (void).cxx_destruct;

@end
