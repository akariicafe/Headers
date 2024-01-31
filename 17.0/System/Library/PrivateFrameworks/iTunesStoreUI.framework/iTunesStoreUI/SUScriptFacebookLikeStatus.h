@class NSArray, NSDictionary;

@interface SUScriptFacebookLikeStatus : SUScriptObject {
    NSDictionary *_dictionary;
}

@property (readonly) unsigned long long friendLikeCount;
@property (readonly) NSArray *friends;
@property (readonly) unsigned long long globalLikeCount;
@property (readonly, getter=isLikedByMe) id likedByMe;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)a0;

- (void)dealloc;
- (id)_className;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (id)initWithLikeStatusDictionary:(id)a0;

@end
