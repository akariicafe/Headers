@class NSString;

@interface PDCommentAuthor : NSObject {
    unsigned int mId;
    NSString *mName;
    NSString *mInitials;
    unsigned int mLastCommentIndex;
    unsigned int mColorIndex;
}

- (id)init;
- (void)setName:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)name;
- (unsigned int)id;
- (void)setId:(unsigned int)a0;
- (id)initials;
- (void)setInitials:(id)a0;
- (unsigned int)colorIndex;
- (unsigned int)lastCommentIndex;
- (void)setColorIndex:(unsigned int)a0;
- (void)setLastCommentIndex:(unsigned int)a0;

@end
