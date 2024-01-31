@class NSString, NSTextAttachment;

@interface NSTextList : NSObject <NSSecureCoding, NSCopying> {
    NSString *_markerFormat;
    unsigned long long _listFlags;
    long long _startIndex;
    void *_listSecondary;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSTextAttachment *markerTextAttachment;
@property (readonly) NSString *markerFormat;
@property (readonly) unsigned long long listOptions;
@property long long startingItemNumber;
@property (readonly, getter=isOrdered) BOOL ordered;

+ (void)initialize;
+ (id)_standardMarkerAttributesForAttributes:(id)a0;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_isOrdered;
- (id)description;
- (unsigned long long)options;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_markerAtIndex:(unsigned long long)a0 inText:(id)a1;
- (id)_markerForMarkerFormat:(id)a0 itemNumber:(long long)a1 isNumbered:(BOOL *)a2 substitutionStart:(unsigned long long *)a3 end:(unsigned long long *)a4 specifierStart:(unsigned long long *)a5 end:(unsigned long long *)a6;
- (id)_markerPrefix;
- (id)_markerSpecifier;
- (id)_markerSpecifierAsCSSValue;
- (id)_markerSuffix;
- (id)_markerTitle;
- (id)_unaffixedMarkerForItemNumber:(long long)a0;
- (id)_unaffixedMarkerFormat;
- (id)_unaffixedMarkerTitle;
- (id)initWithMarkerFormat:(id)a0 options:(unsigned long long)a1;
- (id)initWithMarkerFormat:(id)a0 options:(unsigned long long)a1 startingItemNumber:(long long)a2;
- (id)markerForItemNumber:(long long)a0;

@end
