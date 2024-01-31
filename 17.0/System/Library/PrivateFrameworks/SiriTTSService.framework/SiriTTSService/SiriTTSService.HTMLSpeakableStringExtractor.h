@interface SiriTTSService.HTMLSpeakableStringExtractor : NSObject <SiriTTSHTMLSAXParserDelegate> {
    void /* unknown type, empty encoding */ _speakableString;
    void /* unknown type, empty encoding */ elements;
    void /* unknown type, empty encoding */ isInSpeakableRange;
    void /* unknown type, empty encoding */ htmlString;
}

- (id)init;
- (void).cxx_destruct;
- (void)parser:(id)a0 foundCharacters:(id)a1;
- (void)parser:(id)a0 didEndElement:(id)a1;
- (void)parser:(id)a0 didStartElement:(id)a1 attributes:(id)a2;

@end
