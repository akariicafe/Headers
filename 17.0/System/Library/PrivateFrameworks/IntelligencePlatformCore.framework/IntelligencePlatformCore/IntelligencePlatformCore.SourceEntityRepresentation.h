@interface IntelligencePlatformCore.SourceEntityRepresentation : NSObject <BMStoreData> {
    void /* unknown type, empty encoding */ source;
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ timestamp;
    void /* unknown type, empty encoding */ sourceEntities;
}

@property (nonatomic, readonly) unsigned int dataVersion;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)init;
- (id)serialize;
- (void).cxx_destruct;

@end
