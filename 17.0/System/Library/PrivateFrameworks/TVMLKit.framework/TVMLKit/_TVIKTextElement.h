@class NSAttributedString;

@interface _TVIKTextElement : IKTextElement

@property (copy, nonatomic) NSAttributedString *cachedAttributedString;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_stylesMarkedDirtyNotification:(id)a0;

@end
