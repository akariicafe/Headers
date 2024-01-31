@class NSString;

@interface FCPuzzleOverrides : NSObject

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) NSString *puzzleDescription;
@property (readonly, nonatomic) NSString *author;
@property (readonly, nonatomic) NSString *teaserClue;
@property (readonly, nonatomic) NSString *teaserAnswer;
@property (readonly, nonatomic) NSString *teaserInfo;
@property (readonly, nonatomic) NSString *teaserDirection;
@property (readonly, nonatomic) NSString *teaserNumber;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 description:(id)a2 author:(id)a3 teaserClue:(id)a4 teaserAnswer:(id)a5 teaserInfo:(id)a6 teaserDirection:(id)a7 teaserNumber:(id)a8;

@end
