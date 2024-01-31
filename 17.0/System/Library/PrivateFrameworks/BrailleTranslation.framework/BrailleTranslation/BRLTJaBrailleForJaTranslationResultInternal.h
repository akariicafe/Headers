@interface BRLTJaBrailleForJaTranslationResultInternal : NSObject {
    void /* unknown type, empty encoding */ source;
    void /* unknown type, empty encoding */ target;
    void /* unknown type, empty encoding */ unicharLocations;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithTranslator:(id)a0 source:(id)a1;
- (long long)targetLocationForSourceLocation:(long long)a0;

@end
