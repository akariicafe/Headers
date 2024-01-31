@class LPLinkMetadata;
@protocol FCPuzzleTypeProviding;

@interface NEPuzzleTagLinkPresentationSource : NSObject <NELinkPresentationSource>

@property (readonly, nonatomic) id<FCPuzzleTypeProviding> puzzleTag;
@property (readonly, nonatomic) LPLinkMetadata *linkMetadata;

- (void).cxx_destruct;
- (id)initWithPuzzleTag:(id)a0;

@end
