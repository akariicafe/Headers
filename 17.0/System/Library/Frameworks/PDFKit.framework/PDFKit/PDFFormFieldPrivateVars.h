@class NSString, PDFDocument;

@interface PDFFormFieldPrivateVars : NSObject {
    PDFDocument *document;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
    int fieldType;
    long long buttonType;
    NSString *fieldName;
    NSString *stringValue;
    NSString *defaultStringValue;
    BOOL writeDefaultValue;
    struct __CFDictionary { } *dictionary;
}

- (void).cxx_destruct;

@end
