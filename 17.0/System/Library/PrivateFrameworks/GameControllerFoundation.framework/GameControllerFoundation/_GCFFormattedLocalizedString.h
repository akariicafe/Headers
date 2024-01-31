@class NSString, GCFLocalizedString;

@interface _GCFFormattedLocalizedString : GCFLocalizedString {
    GCFLocalizedString *_format;
    GCFLocalizedString *_arg;
    NSString *__realizedString;
}

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (id)bundle;
- (void)encodeWithCoder:(id)a0;
- (id)key;
- (Class)classForCoder;
- (id)table;
- (id)initWithCoder:(id)a0;
- (id)_realizedString;
- (id)initWithFormat:(id)a0 arg:(id)a1;

@end
