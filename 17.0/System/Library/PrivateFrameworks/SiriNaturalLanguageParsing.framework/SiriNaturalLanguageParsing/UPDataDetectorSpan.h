@class USOSerializedGraph;

@interface UPDataDetectorSpan : UPSpan

@property (readonly) struct __DDResult { } *dataDetectorResult;
@property (readonly) USOSerializedGraph *usoGraph;

- (void).cxx_destruct;
- (id)getUsoGraphPrintedForm;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 category:(id)a1 dataDetectorResult:(struct __DDResult { } *)a2;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 category:(id)a1 dataDetectorResult:(struct __DDResult { } *)a2 usoGraph:(id)a3;

@end
