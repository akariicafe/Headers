@class NSString;

@interface BRLTJaStagedStringInternal : BRLTJaEditableStringInternal {
    void /* unknown type, empty encoding */ stage;
}

@property (nonatomic, readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } NSStage;
@property (nonatomic, readonly) BOOL isStageEmpty;
@property (nonatomic, readonly) NSString *stageString;
@property (nonatomic, readonly) NSString *stageSignalledString;
@property (nonatomic, readonly) NSString *description;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(void *)a0;
- (id)initWithString:(id)a0 NSSelection:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 NSFocus:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 NSSuggestion:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 tokenRangeDict:(id)a4 stage:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a5;

@end
