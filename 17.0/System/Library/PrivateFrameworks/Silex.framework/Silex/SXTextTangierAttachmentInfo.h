@class SXTextExclusionPath;

@interface SXTextTangierAttachmentInfo : TSDDrawableInfo

@property (retain, nonatomic) SXTextExclusionPath *exclusionPath;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } actualRange;

- (void).cxx_destruct;
- (Class)layoutClass;
- (Class)repClass;

@end
