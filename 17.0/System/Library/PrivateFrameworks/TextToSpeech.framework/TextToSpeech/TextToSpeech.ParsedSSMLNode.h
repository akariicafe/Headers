@class NSString;

@interface TextToSpeech.ParsedSSMLNode : NSObject {
    void /* unknown type, empty encoding */ parent;
    void /* unknown type, empty encoding */ tag;
    void /* unknown type, empty encoding */ tagName;
    void /* unknown type, empty encoding */ attributes;
    void /* unknown type, empty encoding */ children;
    void /* unknown type, empty encoding */ range;
    void /* unknown type, empty encoding */ tagStartRange;
    void /* unknown type, empty encoding */ tagEndRange;
    void /* unknown type, empty encoding */ rawText;
}

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;

@end
