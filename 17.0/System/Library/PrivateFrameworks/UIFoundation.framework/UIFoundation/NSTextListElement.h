@class NSArray, NSDictionary, NSTextList, NSAttributedString;

@interface NSTextListElement : NSTextParagraph {
    long long _indentLevel;
    long long _itemNumber;
    long long _contentsLocationOffset;
    BOOL _contentsOnly;
}

@property (weak) NSTextListElement *parentElement;
@property (copy) id /* block */ markerTextAttributeOverrides;
@property (readonly) long long _contentsLocationOffset;
@property (copy) id /* block */ markerTextAttributesForTextList;
@property (readonly) NSTextList *textList;
@property (readonly) NSAttributedString *contents;
@property (readonly) NSDictionary *markerAttributes;
@property (readonly) NSAttributedString *attributedString;
@property (readonly, copy) NSArray *childElements;

+ (id)_createChildElementsFromAttributedString:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 indentLevel:(long long)a2 includesTextListMarkers:(BOOL)a3 effectiveRange:(out struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a4 textListElementInstantiationCallback:(id /* block */)a5;
+ (id)_createElementWithChildElements:(id)a0 textList:(id)a1 nestingLevel:(long long)a2;
+ (id)_createTextListElementFromAttributedString:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 indentLevel:(long long)a2 includesTextListMarkers:(BOOL)a3 effectiveRange:(out struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a4 textListElementInstantiationCallback:(id /* block */)a5;
+ (id)_createUpdatedTextTabsForTextTabs:(id)a0 markerLocation:(double)a1 listLocation:(double)a2;
+ (void)_fillTextListElement:(id)a0 toAttributedString:(id)a1;
+ (id)_formattedAttributedStringForRootTextListElement:(id)a0;
+ (id)_rootTextListElementFromAttributedString:(id)a0 atIndex:(long long)a1 options:(unsigned long long)a2 effectiveRange:(out struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a3 textListElementInstantiationCallback:(id /* block */)a4;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })_textListElementContentsRangeForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inAttributedString:(id)a1 hadMarker:(out BOOL *)a2;
+ (id)textListElementWithChildElements:(id)a0 textList:(id)a1 nestingLevel:(long long)a2;
+ (id)textListElementWithContents:(id)a0 markerAttributes:(id)a1 textList:(id)a2 childElements:(id)a3;

- (id)_markerTextAttributesForTextList:(id)a0 attributes:(id)a1;
- (BOOL)_appendsParagraphSeparator;
- (void)_reparentWithTextListElement:(id)a0 itemNumber:(long long)a1;
- (void)dealloc;
- (id)locationForCharacterIndex:(long long)a0 dataSourceLocationsOnly:(BOOL)a1 actualRange:(out struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeForLocation:(id)a0 allowsTrailingEdge:(BOOL)a1;
- (BOOL)isRepresentedElement;
- (long long)indentLevel;
- (long long)_indentLevel;
- (void)setParagraphContentRange:(id)a0;
- (void).cxx_destruct;
- (id)_createConfiguredParagraphStyleForParagraphStyle:(id)a0;
- (double)_indentOffset;
- (BOOL)contentsOnly;
- (id)_markerString;
- (id)initWithParentElement:(id)a0 textList:(id)a1 contents:(id)a2 markerAttributes:(id)a3 childElements:(id)a4;
- (long long)itemNumber;
- (id)textListElementWithChildElements:(id)a0;
- (double)_markerOffset;

@end
