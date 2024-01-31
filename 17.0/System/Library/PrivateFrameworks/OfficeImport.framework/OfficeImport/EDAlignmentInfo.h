@class NSString;

@interface EDAlignmentInfo : NSObject <NSCopying, EDImmutableObject> {
    int mHorizontalAlignment;
    int mVerticalAlignment;
    int mIndent;
    int mTextRotation;
    BOOL mTextWrapped;
    BOOL mHorizontalAlignOverridden;
    BOOL mVerticalAlignOverridden;
    BOOL mIndentOverridden;
    BOOL mTextWrappedOveridden;
    BOOL mDoNotModify;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)alignmentInfo;

- (id)init;
- (void)setVerticalAlignment:(int)a0;
- (int)verticalAlignment;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setHorizontalAlignment:(int)a0;
- (int)horizontalAlignment;
- (int)indent;
- (void)setIndent:(int)a0;
- (void)setDoNotModify:(BOOL)a0;
- (void)setTextWrapped:(BOOL)a0;
- (BOOL)isEqualToAlignmentInfo:(id)a0;
- (BOOL)isHorizontalAlignOverridden;
- (BOOL)isIndentOverridden;
- (BOOL)isTextWrapped;
- (BOOL)isTextWrappedOverridden;
- (BOOL)isVerticalAlignOverridden;
- (void)setTextRotation:(int)a0;
- (int)textRotation;

@end
