@class NSString, LPLinkMetadata;
@protocol FCTagProviding;

@interface NEPuzzleHubLinkPresentationSource : NSObject <NELinkPresentationSource>

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) id<FCTagProviding> tag;
@property (readonly, nonatomic) LPLinkMetadata *linkMetadata;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 tag:(id)a1;

@end
