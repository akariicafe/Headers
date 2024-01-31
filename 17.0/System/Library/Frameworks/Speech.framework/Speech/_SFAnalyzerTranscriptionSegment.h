@class NSArray;

@interface _SFAnalyzerTranscriptionSegment : NSObject

@property (readonly, copy, nonatomic) NSArray *text;
@property (readonly, copy, nonatomic) NSArray *alternatives;

- (void).cxx_destruct;
- (id)initWithText:(id)a0 alternatives:(id)a1;

@end
