@class NSString, SUUIReviewMetadata, NSURL, NSNumber;

@interface SUScriptReview : SUScriptObject {
    NSURL *_infoURL;
    SUUIReviewMetadata *_review;
}

@property (readonly) NSNumber *adamID;
@property (retain) NSString *body;
@property (readonly) id hasSavedDraft;
@property (retain) NSString *infoURL;
@property (retain) NSString *itemType;
@property (retain) NSString *nickname;
@property (retain) id nicknameIsConfirmed;
@property (retain) NSNumber *rating;
@property (retain) NSString *title;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (id)webScriptNameForKeyName:(id)a0;

- (id)init;
- (void)dealloc;
- (id)_className;
- (id)attributeKeys;
- (id)copyReview;
- (id)scriptAttributeKeys;
- (id)removeDraft;
- (id)restoreFromDraft;
- (id)saveAsDraft;
- (id)initWithReview:(id)a0;

@end
