@class NSString;

@interface SiriMessageTypes.NLParseResponse : NSObject {
    void /* unknown type, empty encoding */ userParses;
    void /* unknown type, empty encoding */ responseStatusCode;
    void /* unknown type, empty encoding */ fallbackParse;
    void /* unknown type, empty encoding */ serverFallbackReason;
}

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;

@end
