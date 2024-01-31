@interface LighthouseBackground.LHStoreItem : NSObject <BMStoreData> {
    void /* unknown type, empty encoding */ messageTimestamp;
    void /* unknown type, empty encoding */ messageType;
    void /* unknown type, empty encoding */ messagePayload;
}

@property (nonatomic) void /* unknown type, empty encoding */ dataVersion;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)init;
- (id)serialize;
- (void).cxx_destruct;

@end
