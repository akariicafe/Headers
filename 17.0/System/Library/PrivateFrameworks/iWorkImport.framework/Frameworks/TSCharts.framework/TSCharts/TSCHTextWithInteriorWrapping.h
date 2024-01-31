@class TSDWrapSegments;

@interface TSCHTextWithInteriorWrapping : TSWPText {
    TSDWrapSegments *_cachedInteriorWrapSegments;
}

- (int)verticalAlignment;
- (void).cxx_destruct;
- (BOOL)shrinkTextToFit;
- (id)textWrapper;
- (id)interiorWrapPath;
- (id)interiorWrapSegments;

@end
