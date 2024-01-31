@class NSMutableArray;

@interface VMUNodeToStringMap : NSObject <NSSecureCoding> {
    NSMutableArray *_strings;
    void *_stringToIndexMapVoidPtr;
    void *_nodeToStringIndexMapVoidPtr;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (unsigned int)uniquedStringCount;
- (id)init;
- (id)stringForNode:(unsigned int)a0;
- (void)dealloc;
- (void)resymbolicate__NSMallocBlock__StringsWithGraph:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (unsigned int)count;
- (id)description;
- (unsigned int)_indexForString:(id)a0;
- (void).cxx_destruct;
- (void)setString:(id)a0 forNode:(unsigned int)a1;
- (void)enumerateHexAddressesInStrings:(id /* block */)a0;
- (id)initWithCoder:(id)a0;

@end
