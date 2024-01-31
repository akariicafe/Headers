@class NSString, NSArray, NSURL, NSDate;

@interface _UIDocumentPickerContainerURLItem : _UIDocumentPickerContainerItem {
    NSURL *_url;
    long long _cachedType;
    NSString *_cachedTitle;
    NSString *_cachedSubtitle;
    NSString *_cachedSubtitle2;
    NSArray *_cachedTags;
    unsigned long long _cachedIndentation;
    NSString *_cachedSortPath;
    NSString *_cachedContentType;
    NSDate *_cachedContentModifiedDate;
    BOOL _cachedIsAlias;
    id _generationIdentifier;
}

+ (id)defaultKeys;

- (id)initWithURL:(id)a0;
- (id)contentType;
- (id)tags;
- (id)subtitle2;
- (id)modificationDate;
- (id)subtitle;
- (void).cxx_destruct;
- (id)title;
- (id)url;
- (long long)type;
- (unsigned long long)indentationLevel;
- (void)cacheValues;
- (BOOL)isAlias;
- (void)_cacheIndentationLevelWithSortPathComponents:(id)a0;
- (void)_modelChanged;
- (void)_removeCachedValues;
- (BOOL)attributesModified:(id)a0;
- (BOOL)renameable;
- (id)sortPath;
- (id)sortPathComponents;
- (id)urlInLocalContainer;

@end
