@interface SiriAnalyticsMessageProcessingStrategy : NSObject {
    void /* unknown type, empty encoding */ metadataExtractor;
    void /* unknown type, empty encoding */ messageStaging;
}

- (id)init;
- (id)initWithMessageStaging:(id)a0 metadataExtractor:(id)a1;
- (void)processWithMessages:(id)a0;
- (void).cxx_destruct;

@end
