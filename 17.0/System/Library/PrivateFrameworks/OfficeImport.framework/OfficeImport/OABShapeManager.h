@class NSString;

@interface OABShapeManager : OABShapeBaseManager <OABPropertiesManager> {
    void *mShape;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hidden;
- (id)initWithShape:(void *)a0;
- (BOOL)isFilled;
- (BOOL)isStroked;
- (BOOL)isShadowed;
- (id)initWithShape:(void *)a0 masterShape:(void *)a1;
- (BOOL)isFillOK;
- (BOOL)isShadowOK;
- (BOOL)isStrokeOK;
- (BOOL)isTextPath;
- (BOOL)textPathBold;
- (id)textPathFontFamily;
- (int)textPathFontSize;
- (BOOL)textPathItalic;
- (BOOL)textPathSmallcaps;
- (BOOL)textPathStrikethrough;
- (int)textPathTextAlignment;
- (BOOL)textPathUnderline;
- (id)textPathUnicodeString;

@end
