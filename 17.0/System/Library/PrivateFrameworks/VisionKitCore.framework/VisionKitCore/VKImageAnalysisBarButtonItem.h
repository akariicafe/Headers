@interface VKImageAnalysisBarButtonItem : VKSelectableBarButtonItem

@property (nonatomic) unsigned long long mode;

+ (id)analysisButtonWithTarget:(id)a0 action:(SEL)a1 mode:(unsigned long long)a2;
+ (id)imageForMode:(unsigned long long)a0;

@end
