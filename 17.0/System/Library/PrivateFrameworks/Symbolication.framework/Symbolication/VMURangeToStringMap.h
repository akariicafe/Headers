@class NSMutableArray;

@interface VMURangeToStringMap : NSObject <NSSecureCoding> {
    NSMutableArray *_strings;
    void *_stringToIndexMapVoidPtr;
    void *_rangeAndStringVectorVoidPtr;
    BOOL _sorted;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)sort;
- (unsigned int)uniquedStringCount;
- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (unsigned int)count;
- (id)description;
- (id)stringForIndex:(unsigned int)a0;
- (id)stringForAddress:(unsigned long long)a0;
- (void).cxx_destruct;
- (unsigned int)indexForString:(id)a0 insertIfMissing:(BOOL)a1;
- (void)enumerateRanges:(id /* block */)a0;
- (void)resymbolicateStringsWithSymbolicator:(struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })a0;
- (void)enumerateHexAddressesInStrings:(id /* block */)a0;
- (struct _VMURange { unsigned long long x0; unsigned long long x1; })rangeForString:(id)a0 startingAtAddress:(unsigned long long)a1;
- (void)setString:(id)a0 forRange:(struct _VMURange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithCoder:(id)a0;
- (struct _VMURange { unsigned long long x0; unsigned long long x1; })rangeContainingAddress:(unsigned long long)a0;

@end
