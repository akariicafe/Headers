@class NSString;

@interface BRLTUnicodePrintPreprocessor : NSObject <BRLTPrintPreprocessor>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)preprocessPrintString:(id)a0 withLocationMap:(id *)a1 isEightDot:(BOOL)a2 textFormattingRanges:(id)a3;

@end
