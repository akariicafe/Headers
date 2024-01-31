@interface NSIndexPath : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long *_indexes;
    unsigned long long _length;
    unsigned long long _inlinePayload;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long length;

+ (id)indexPath;
+ (void)initialize;
+ (id)indexPathWithIndex:(unsigned long long)a0;
+ (id)indexPathWithIndexes:(const unsigned long long *)a0 length:(unsigned long long)a1;

- (id)init;
- (unsigned long long)hash;
- (id)initWithIndex:(unsigned long long)a0;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (long long)compare:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)getIndexes:(unsigned long long *)a0;
- (void)getIndexes:(unsigned long long *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned long long)indexAtPosition:(unsigned long long)a0;
- (id)indexPathByAddingIndex:(unsigned long long)a0;
- (id)indexPathByRemovingLastIndex;
- (id)initWithIndexes:(const unsigned long long *)a0 length:(unsigned long long)a1;

@end
