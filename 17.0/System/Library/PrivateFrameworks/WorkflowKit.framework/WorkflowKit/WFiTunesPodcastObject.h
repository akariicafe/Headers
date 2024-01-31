@class NSString, NSURL, NSDictionary;

@interface WFiTunesPodcastObject : WFiTunesCollectionObject <MTLJSONSerializing>

@property (copy, nonatomic) NSString *podcastUUID;
@property (retain, nonatomic) NSURL *feedURL;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 identifier:(id)a1 podcastUUID:(id)a2 feedURL:(id)a3 kind:(id)a4;

@end
