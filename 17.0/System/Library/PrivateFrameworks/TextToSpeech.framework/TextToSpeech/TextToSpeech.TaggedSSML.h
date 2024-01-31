@class NSArray, NSString;

@interface TextToSpeech.TaggedSSML : NSObject {
    void /* unknown type, empty encoding */ ssmlSnippets;
    void /* unknown type, empty encoding */ originalSSML;
}

@property (nonatomic, copy) NSArray *ssmlSnippets;
@property (nonatomic, copy) NSString *originalSSML;

- (id)init;
- (void).cxx_destruct;

@end
