@class TSWPStorage;

@interface TSWPSmartField : TSPObject <TSKDocumentObject, TSPCopying> {
    unsigned long long _lastTableIndex;
}

@property (nonatomic) TSWPStorage *parentStorage;
@property (readonly, nonatomic) unsigned int attributeArrayKind;
@property (readonly, nonatomic) int styleAttributeArrayKind;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } range;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)defaultFieldStyleIdentifier;

- (void)dealloc;
- (id)initWithContext:(id)a0;
- (id)text;
- (BOOL)allowsEditing;
- (int)elementKind;
- (id)copyWithContext:(id)a0;
- (void)wasAddedToDocumentRoot:(id)a0 context:(id)a1;
- (void)adoptStylesheet:(id)a0 withMapper:(id)a1;
- (BOOL)allowsPasteAsSmartField;
- (BOOL)canCopy:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)wasRemovedFromDocumentRoot:(id)a0;
- (void)willBeAddedToDocumentRoot:(id)a0 context:(id)a1;
- (void)willBeRemovedFromDocumentRoot:(id)a0;

@end
