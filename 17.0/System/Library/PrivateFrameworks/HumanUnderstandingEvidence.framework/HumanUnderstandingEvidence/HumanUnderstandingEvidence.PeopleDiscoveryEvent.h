@interface HumanUnderstandingEvidence.PeopleDiscoveryEvent : NSObject <BMStoreData> {
    void /* unknown type, empty encoding */ peopleDiscovered;
}

@property (nonatomic, readonly) unsigned int dataVersion;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)init;
- (id)serialize;
- (id)json;
- (void).cxx_destruct;

@end
