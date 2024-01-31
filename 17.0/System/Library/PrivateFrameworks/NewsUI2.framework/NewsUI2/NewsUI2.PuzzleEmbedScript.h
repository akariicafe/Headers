@class NSString, WKUserScript;

@interface NewsUI2.PuzzleEmbedScript : NSObject <SWScript> {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ eventName;
    void /* unknown type, empty encoding */ eventDetail;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) WKUserScript *userScript;
@property (nonatomic, readonly) NSString *executableScript;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ queueable;

- (id)init;
- (void).cxx_destruct;

@end
