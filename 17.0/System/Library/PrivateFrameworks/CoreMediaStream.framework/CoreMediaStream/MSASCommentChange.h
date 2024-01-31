@class MSASComment;

@interface MSASCommentChange : NSObject

@property (retain, nonatomic) MSASComment *comment;
@property (nonatomic) int deletionIndex;
@property (nonatomic) int type;

- (id)description;
- (void).cxx_destruct;

@end
