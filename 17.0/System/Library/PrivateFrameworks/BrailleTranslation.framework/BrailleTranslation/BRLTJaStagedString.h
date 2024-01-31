@class NSString, BRLTJaStagedStringInternal;

@interface BRLTJaStagedString : NSObject

@property (readonly) BRLTJaStagedStringInternal *underlyingObject;
@property (readonly, copy, nonatomic) NSString *string;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } NSSelection;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } NSFocus;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } NSSuggestion;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } NSStage;
@property (readonly, nonatomic) NSString *stageSignalledString;

- (void).cxx_destruct;
- (id)initWithUnderlyingObject:(id)a0;
- (id)initWithString:(id)a0 selection:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 focus:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 suggestion:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 tokenRanges:(id)a4 stage:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a5;
- (BOOL)isStageEmpty;
- (id)stageString;

@end
